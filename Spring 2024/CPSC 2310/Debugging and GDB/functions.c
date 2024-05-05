/*
* Kaylee Pierce
* CPSC 2311-002
* kayleej@clemson.edu
*/

#include "functions.h"

// Read a matrix from a file and allocate memory to store it
int **readFile(FILE *fp, int *size)
{
    fscanf(fp, "%d", size);
    int num = *size;
    int index = 0;
    
    int **mat = (int **)malloc(num * sizeof(int*));
    for(index = 0; index < num; index++)
    {
        mat[index] = (int*)malloc(num * sizeof(int)); 
    }
    for(int row = 0; row < num; row++)
    {
        for(int col = 0; col < num; col++)
        {
            fscanf(fp, "%d", &mat[row][col]);
        }
    }
    return mat;
}

// Print the elements of matrix
void printMatrix (int **mat, int num)
{
    int row = 0; 
    int col = 0;
    for(row = 0; row < num; row++)
    {
        for(col = 0; col < num; col++)
        {
            printf("%.2d\t", mat[row][col]);
        }
        printf("\n");
    }
    
}

// Calculate the sum of elements excluding diagonal 
int calculateVal(int** mat, int size) 
{
    int sum = 0;
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++) {
            if(isLeftDiagonal(row, col) && isRightDiagonal(size, row, col))
            {
                continue;
            }

            if(isLeftDiagonal(row, col) | isRightDiagonal(size, row, col)) 
            {
                continue;
            }

            sum += mat[row][col];
        }
    }
    return sum;
}

// Check if element is on right diagonal
bool isRightDiagonal(int size, int row, int col)
{
    return (size - 1 - col) == row ? true : false;
}

// Check if element is on left diagonal
bool isLeftDiagonal(int row, int col)
{
    return (row==col) ? true : false;
}
