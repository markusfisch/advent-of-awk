#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NCUPS 1000000

/* the index is the number, the value points to the next index */
int cups[NCUPS];

int find_dest(int value, int pick1, int pick2, int pick3) {
	if (value < 0) {
		return find_dest(NCUPS - 1, pick1, pick2, pick3);
	} else if (value == pick1 || value == pick2 || value == pick3) {
		return find_dest(value - 1, pick1, pick2, pick3);
	} else {
		return value;
	}
}

void game(int current) {
	for (int i = 0; i < 10000000; ++i) {
		int pick1 = cups[current];
		int pick2 = cups[pick1];
		int pick3 = cups[pick2];
		int dest = find_dest(current - 1, pick1, pick2, pick3);
		int nx = cups[pick3];
		cups[current] = nx;
		current = nx;
		cups[pick3] = cups[dest];
		cups[dest] = pick1;
	}
}

int setup(char *input) {
	for (int i = 0; i < NCUPS; ++i) {
		cups[i] = i + 1;
	}
	#define INPUT(n) input[n] - 49
	int last = strlen(input) - 1;
	for (int i = 0; i < last; ++i) {
		cups[INPUT(i)] = INPUT(i + 1);
	}
	cups[NCUPS - 1] = INPUT(0);
	cups[INPUT(last)] = last + 1;
	return INPUT(0);
}

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("usage: %s SINGLE_DIGIT_CUP_LABELS\n", *argv);
		return 1;
	}
	game(setup(argv[1]));
	printf("%ld\n", (long) (cups[0] + 1) * (cups[cups[0]] + 1));
	return 0;
}
