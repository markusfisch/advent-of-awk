# Advent of AWK 2020

[AWK](https://en.wikipedia.org/wiki/AWK) solutions for
[Advent of Code 2020](https://adventofcode.com/2020).

## Solutions

| Puzzle   | Part 1             | Part 2             |
| --------:| ------------------ | ------------------ |
| [1][1]   | [Part 1](01/part1) | [Part 2](01/part1) |
| [2][2]   | [Part 1](02/part1) | [Part 2](02/part1) |
| [3][3]   | [Part 1](03/part1) | [Part 2](03/part1) |
| [4][4]   | [Part 1](04/part1) | [Part 2](04/part1) |
| [5][5]   | [Part 1](05/part1) | [Part 2](05/part1) |
| [6][6]   | [Part 1](06/part1) | [Part 2](06/part1) |
| [7][7]   | [Part 1](07/part1) | [Part 2](07/part1) |
| [8][8]   | [Part 1](08/part1) | [Part 2](08/part1) |
| [9][9]   | [Part 1](09/part1) | [Part 2](09/part1) |
| [10][10] | [Part 1](10/part1) | [Part 2](10/part1) |
| [11][11] | [Part 1](11/part1) | [Part 2](11/part1) |
| [12][12] | [Part 1](12/part1) | [Part 2](12/part1) |
| [13][13] | [Part 1](13/part1) | [Part 2](13/part1) |
| [14][14] | [Part 1](14/part1) | [Part 2](14/part1) |
| [15][15] | [Part 1](15/part1) | [Part 2](15/part1) |

## Requirements

To run the scripts you need some flavour of `AWK`, of course.

To re-generate (or verify) the `solutions` file, you also need
[bash](https://en.wikipedia.org/wiki/Bash_(Unix_shell)) and
[diff](https://en.wikipedia.org/wiki/Diff).

## Running the script for a certain day

Replace `DAY` with the number of the day and `N` with the number of the part:

	$ cd DAY
	$ ./partN input

## Running all scripts

To run all scripts and print all the solutions do:

	$ ./test report

If you want to play with the code and check that it's still working you can
do:

	$ ./test check

If this prints nothing it means all solutions are still correct.
Otherwise the differences will be shown.

To update the `solutions` file after adding a new solution, you'd do:

	$ ./test save

[1]: https://adventofcode.com/2020/day/1
[2]: https://adventofcode.com/2020/day/2
[3]: https://adventofcode.com/2020/day/3
[4]: https://adventofcode.com/2020/day/4
[5]: https://adventofcode.com/2020/day/5
[6]: https://adventofcode.com/2020/day/6
[7]: https://adventofcode.com/2020/day/7
[8]: https://adventofcode.com/2020/day/8
[9]: https://adventofcode.com/2020/day/9
[10]: https://adventofcode.com/2020/day/10
[11]: https://adventofcode.com/2020/day/11
[12]: https://adventofcode.com/2020/day/12
[13]: https://adventofcode.com/2020/day/13
[14]: https://adventofcode.com/2020/day/14
[15]: https://adventofcode.com/2020/day/15
