#[[
This CMakeLists.txt file contains the instruction to compile
A brute-force Sudoku solver written by bryanesmith
]]

cmake_minimum_required(VERSION 2.6)

project (Sudoku_solver)

#Either
include_directories ("${PROJECT_SOURCE_DIR}")
add_library(SudokuPuzzle SudokuPuzzle.cpp)
add_executable(Sudoku_solver main.cpp)

target_link_libraries(Sudoku_solver SudokuPuzzle)

#Or
###Another variant 
#set(SOURCES main.cpp SudokuPuzzle.cpp)
#add_executable(Sodoku_solver ${SOURCES})