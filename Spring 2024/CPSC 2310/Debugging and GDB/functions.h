/*
* Kaylee Pierce
* CPSC 2311-002
* kayleej@clemson.edu
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
* Parameter: fp A pointer to the input file stream
* Parameter: size A pointer to an int to store size of matrix
* Return: int pointer to 2D array representing matrix
* This function reads a matrix from a file and
* allocates memory to store it
*/
int** readFile(FILE* fp, int *size);

/*
* Parameter: mat A int pointer to 2D array matrix
* Parameter: num Size of matrix (rows, cols)
* Return: void
* This function prints the elements of the matrix
*/
void printMatrix (int** mat, int num);

/*
* Parameter: mat A int pointer to 2D array matrix
* Parameter: size Size of matrix
* Return: sum of elements excluding diagonal
* This function calculates the sum of elements excluding diagonal
*/
int calculateVal(int** mat, int size);

/*
* Parameter: size The size of matrix
* Parameter: row The row index
* Parameter: col The column index
* Return: true if element is on right diagonal; false otherwise
* This function checks if element is on right diagonal
*/
bool isRightDiagonal(int size, int row, int col);

/*
* Parameter: row The row index
* Parameter: col The column index
* Return: true if element is on left diagonal; false otherwise
* This function checks if element is on left diagonal
*/
bool isLeftDiagonal(int row, int col);

#endif
