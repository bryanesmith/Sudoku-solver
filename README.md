## Description

A brute-force Sudoku solver written in C++.

## License

This project is the public domain under the terms of CC0: http://creativecommons.org/publicdomain/zero/1.0/

## Dependencies

GNU C++ compiler, or any other compiler.

## Build

Run the build script: build.sh

An executable will be created: sudoku-solver

OR

Create a directory: mkdir build

go to the build directory and Run the cmake: cd build && cmake ..

Then run make: make

## Overview

After building the executable, sudoku-solver, run it:

```
$ ./sudoku-solver 
-------------------------------
| 1  .  . | .  .  7 | .  9  . |
| .  3  . | .  2  . | .  .  8 |
| .  .  9 | 6  .  . | 5  .  . |
-------------------------------
| .  .  5 | 3  .  . | 9  .  . |
| .  1  . | .  8  . | .  .  2 |
| 6  .  . | .  .  4 | .  .  . |
-------------------------------
| 3  .  . | .  .  . | .  1  . |
| .  4  . | .  .  . | .  .  7 |
| .  .  7 | .  .  . | 3  .  . |
-------------------------------

Here is the solution:
-------------------------------
| 1  6  2 | 8  5  7 | 4  9  3 |
| 5  3  4 | 1  2  9 | 6  7  8 |
| 7  8  9 | 6  4  3 | 5  2  1 |
-------------------------------
| 4  7  5 | 3  1  2 | 9  8  6 |
| 9  1  3 | 5  8  6 | 7  4  2 |
| 6  2  8 | 7  9  4 | 1  3  5 |
-------------------------------
| 3  5  6 | 4  7  8 | 2  1  9 |
| 2  4  1 | 9  3  5 | 8  6  7 |
| 8  9  7 | 2  6  1 | 3  5  4 |
-------------------------------
```

To modify the Sudoku puzzle, edit: `main.cpp`

