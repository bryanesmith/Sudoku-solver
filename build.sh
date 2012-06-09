#!/bin/sh
# Build and run Sudoku puzzle solver
# Author: Bryan Smith - bryanesmith@gmail.com
# Date:   September 1 2008

# If executables directory exists, try delete. Will get warning if
# cannot delete. Otherwise, make directory for executable.
if [ -f sudoku-solver ]; then
  rm sudoku-solver
fi

# Build using GCC C++ compiler, then run
g++ -Wall main.cpp SudokuPuzzle.cpp -o sudoku-solver

