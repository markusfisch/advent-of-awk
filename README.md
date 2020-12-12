# Advent of AWK 2020

[AWK](https://en.wikipedia.org/wiki/AWK) solutions for
[Advent of Code 2020](https://adventofcode.com/2020).

## Requirements

To run the scripts you need some flavour of `AWK`, of course.

To re-generate (or verify) the `solutions` file, you also need
[bash](https://en.wikipedia.org/wiki/Bash_(Unix_shell)) and
[diff](https://en.wikipedia.org/wiki/Diff).

## Running the script for a certain day

Replace `DAY` with the number of the day and `N` with 1 or 2:

	$ cd DAY
	$ ./partN input

## Running all scripts

To run all scripts and print all the solutions do:

	$ ./test report

If you want to play with the code and check that it's still working you can
do:

	$ ./test check

To update the `solutions` file after adding a new solution, you'd do:

	$ ./test save

