#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NCUPS 1000000

struct Cup {
	int value;
	struct Cup *next;
} cups[NCUPS];

struct Cup *lut[NCUPS];

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("usage: %s SINGLE_DIGIT_CUP_LABELS\n", *argv);
		return 1;
	}
	int max = 0;
	/* setup */
	{
		int nf = strlen(argv[1]);
		int i = 0;
		for (; i < nf; ++i) {
			int value = argv[1][i] - 48;
			cups[i].value = value;
			cups[i].next = &cups[i + 1];
			lut[value] = &cups[i];
			if (value > max) {
				max = value;
			}
		}
		int n = max + 1;
		for (; i < NCUPS; ++i, ++n) {
			cups[i].value = n;
			cups[i].next = &cups[i + 1];
			lut[n] = &cups[i];
		}
		cups[i - 1].next = &cups[0];
		max = n - 1;
	}
	/* the game */
	{
		int nrest = NCUPS - 4;
		struct Cup *current = &cups[0];
		for (int i = 0; i < 10000000; ++i) {
			int dest = current->value;
			struct Cup *first_pick = current->next;
			struct Cup *next = first_pick;
			struct Cup *last_pick;
			for (int j = 0; j < 3; ++j) {
				last_pick = next;
				next = next->next;
			}
			while (1) {
				--dest;
				if (dest < 1) dest = max;
				struct Cup *check = first_pick;
				int found = 0;
				for (int j = 0; j < 3; ++j) {
					if (check->value == dest) {
						found = 1;
						break;
					}
					check = check->next;
				}
				if (found == 0) break;
			}
			struct Cup *insert = lut[dest];
			current->next = next;
			struct Cup *after_insert = insert->next;
			insert->next = first_pick;
			last_pick->next = after_insert;
			current = next;
		}
	}
	/* print result */
	for (int i = 0; i < NCUPS; ++i) {
		if (cups[i].value == 1) {
			struct Cup *first = cups[i].next;
			struct Cup *second = first->next;
			printf("%ld\n", (long) first->value * second->value);
			break;
		}
	}
	return 0;
}
