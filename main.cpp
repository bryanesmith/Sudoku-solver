#include <iostream>
#include "SudokuPuzzle.h"

/*
 * Create and solve a Sudoku puzzle. Will print
 * the board, then try to solve. If solves, will
 * print the solution. If unsolvable, will display
 * message.
 */
int main (int argc, char * const argv[]) {
    
	SudokuPuzzle puzzle;
	
	/*
	 * Create board below. For each initial
	 * value on the board, specify using:
	 * 
	 * puzzle.setBoardValue(int x-cord, y-cord, val);
	 *
	 * Where:
	 *   x-cord: X coordinate on the Sudoku field.
     *   y-cord: Y coordinate on the Sudoku field.
	 *   val:    The value to place on the board.
	 *
	 * Use the following to determine x- and y- 
	 * coordinates:
	 *
	 *       X
	 *        0  1  2   3  4  5   6  7  8
	 *      -------------------------------
	 * Y 0  | .  .  . | .  .  . | .  .  . |
	 *   1  | .  .  . | .  .  . | .  .  . |
	 *   2  | .  .  . | .  .  . | .  .  . |
	 *      -------------------------------
	 *   3  | .  .  . | .  .  . | .  .  . |
	 *   4  | .  .  . | .  .  . | .  .  . |
	 *   5  | .  .  . | .  .  . | .  .  . |
	 *      -------------------------------
	 *   6  | .  .  . | .  .  . | .  .  . |
	 *   7  | .  .  . | .  .  . | .  .  . |
	 *   8  | .  .  . | .  .  . | .  .  . |
	 *      -------------------------------
	 *
	 */
	
	// Set known values on board block 1
	puzzle.setBoardValue(0,0,1);
	puzzle.setBoardValue(1,1,3);
	puzzle.setBoardValue(2,2,9);
	
	// Set known values on board block 2
	puzzle.setBoardValue(3,2,6);
	puzzle.setBoardValue(4,1,2);
	puzzle.setBoardValue(5,0,7);
	
	// Set known values on board block 3
	puzzle.setBoardValue(6,2,5);
	puzzle.setBoardValue(7,0,9);
	puzzle.setBoardValue(8,1,8);
	
	// Set known values on board block 4
	puzzle.setBoardValue(0,5,6);
	puzzle.setBoardValue(1,4,1);
	puzzle.setBoardValue(2,3,5);
	
	// Set known values on board block 5
	puzzle.setBoardValue(3,3,3);
	puzzle.setBoardValue(4,4,8);
	puzzle.setBoardValue(5,5,4);
	
	// Set known values on board block 6
	puzzle.setBoardValue(6,3,9);
	puzzle.setBoardValue(8,4,2);
	
	// Set known values on board block 7
	puzzle.setBoardValue(0,6,3);
	puzzle.setBoardValue(1,7,4);
	puzzle.setBoardValue(2,8,7);
	
	// Board block 8 is empty
	
	// Set known values on board block 9
	puzzle.setBoardValue(6,8,3);
	puzzle.setBoardValue(7,6,1);
	puzzle.setBoardValue(8,7,7);
	
	// Print the board before solving.
	puzzle.print();
	
	std::cout << std::endl;
	
	// Now solve. If not solvable, say.
	if (puzzle.solve()) {
	
	  std::cout << "Here is the solution:" << std::endl;
	  puzzle.print();
	  
	} else {
	  std::cout << "Puzzle is not solvable.";
	}
	
	std::cout << std::endl;
	
	// Exit normally
    return 0;
	
} // main
