# Advent of AWK 2020

[AWK](https://en.wikipedia.org/wiki/AWK) solutions for
[Advent of Code 2020](https://adventofcode.com/2020).

## Puzzles & Solutions

| Puzzle                                | Part 1             | Part 2             |
| -------------------------------------:| ------------------ | ------------------ |
| [Day 1: Report Repair][1]             | [Part 1](01/part1) | [Part 2](01/part2) |
| [Day 2: Password Philosophy][2]       | [Part 1](02/part1) | [Part 2](02/part2) |
| [Day 3: Toboggan Trajectory][3]       | [Part 1](03/part1) | [Part 2](03/part2) |
| [Day 4: Passport Processing][4]       | [Part 1](04/part1) | [Part 2](04/part2) |
| [Day 5: Binary Boarding][5]           | [Part 1](05/part1) | [Part 2](05/part2) |
| [Day 6: Custom Customs][6]            | [Part 1](06/part1) | [Part 2](06/part2) |
| [Day 7: Handy Haversacks][7]          | [Part 1](07/part1) | [Part 2](07/part2) |
| [Day 8: Handheld Halting][8]          | [Part 1](08/part1) | [Part 2](08/part2) |
| [Day 9: Encoding Error][9]            | [Part 1](09/part1) | [Part 2](09/part2) |
| [Day 10: Adapter Array][10]           | [Part 1](10/part1) | [Part 2](10/part2) |
| [Day 11: Seating System ][11]         | [Part 1](11/part1) | [Part 2](11/part2) |
| [Day 12: Rain Risk][12]               | [Part 1](12/part1) | [Part 2](12/part2) |
| [Day 13: Shuttle Search][13]          | [Part 1](13/part1) | [Part 2](13/part2) |
| [Day 14: Docking Data][14]            | [Part 1](14/part1) | [Part 2](14/part2) |
| [Day 15: Rambunctious Recitation][15] | [Part 1](15/part1) | [Part 2](15/part2) |
| [Day 16: Ticket Translation][16]      | [Part 1](16/part1) | [Part 2](16/part2) |
| [Day 17: Conway Cubes][17]            | [Part 1](17/part1) | [Part 2](17/part2) |
| [Day 18: Operation Order][18]         | [Part 1](18/part1) | [Part 2](18/part2) |
| [Day 19: Monster Messages][19]        | [Part 1](19/part1) | [Part 2](19/part2) |
| [Day 20: Jurassic Jigsaw][20]         | [Part 1](20/part1) | [Part 2](20/part2) |
| [Day 21: Allergen Assessment][21]     | [Part 1](21/part1) | [Part 2](21/part2) |
| [Day 22: Crab Combat][22]             | [Part 1](22/part1) | [Part 2](22/part2) |
| [Day 23: Crab Cups][23]               | [Part 1](23/part1) | [Part 2](23/part2) |
| [Day 24: Lobby Layout][24]            | [Part 1](24/part1) | [Part 2](24/part2) |
| [Day 25: Combo Breaker][25]           | [Part 1](25/part1) | [Part 2](25/part2) |

## Requirements

To run the scripts you need some flavour of `AWK`, of course.

To re-generate (or verify) the `results` file, you also need
[bash](https://en.wikipedia.org/wiki/Bash_(Unix_shell)) and
[diff](https://en.wikipedia.org/wiki/Diff).

## Running the script for a certain day

Replace `DAY` with the two-digit number of the day and `N` with the number
of the part:

	$ cd DAY
	$ ./partN input

## Running all scripts

Please note running all the scripts can take some time.
Some solutions require a lot of passes and/or memory and while `AWK` is
certainly not a slow tool, it does reach its limits.

To run all scripts and print all the solutions do:

	$ ./test report

If you want to play with the code and check that it's still working you can
do:

	$ ./test check

This will print nothing if all the solutions are correct.
Otherwise the differences will be shown.

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
[16]: https://adventofcode.com/2020/day/16
[17]: https://adventofcode.com/2020/day/17
[18]: https://adventofcode.com/2020/day/18
[19]: https://adventofcode.com/2020/day/19
[20]: https://adventofcode.com/2020/day/20
[21]: https://adventofcode.com/2020/day/21
[22]: https://adventofcode.com/2020/day/22
[23]: https://adventofcode.com/2020/day/23
[24]: https://adventofcode.com/2020/day/24
[25]: https://adventofcode.com/2020/day/25
