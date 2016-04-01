/*
Write a program to generate elements of a matrix in spiral order.
Store the generated elements in single dimensional array and return that array.

Directions for Spiral are : Go Right ,Go Down ,Go Left, Go Up
Ex:

Matrix:
1	2	3
4	5	6
7	8	9

Spiral order:
1	2	3	6	9	8	7	4	5

Given matrix is a two dimensional array(input_array) with dimensions rows, columns.
If rows, columns are invalid then return NULL.
If input_array is NULL then return NULL.

Example Input :
int board[2][3]={
				 {4,6,7},
				 {1,3,8}
				};
spiral(2,2,(int **)board); // Rows followed by columns followed by board

Example Output : Return an array consisting of {4,6,7,8,3,1};

Note : Check the function Parameters ,Its a double pointer .

*/


#include "stdafx.h"
#include<stdlib.h>
void assignToArray(int, int, int, int, int**, int*, int*);
int *spiral(int rows, int columns, int **input_array)
{
	if (rows <= 0 || columns <= 0 || input_array == NULL)
		return NULL;
	int i = 0;
	int *index = &i;
	int *array = (int*)malloc(sizeof(int)*(rows*columns));
	assignToArray(0, rows, 0, columns, input_array, index, array);
	return array;
}

void assignToArray(int rowstart, int rows, int columnstart, int columns, int **input_array, int *index, int *array){
	if(rowstart > rows - 1)
		return;
	if(columnstart > columns - 1)
		return;
	for(int i = columnstart; i < columns; i++)
	{
		array[*index] = input_array[rowstart][i];
		(*index)++;
	}
	
	for(int i = rowstart + 1; i < rows; i++)
	{
		array[*index] = input_array[i][columns-1];
		(*index)++;
	}
	if(columnstart != columns-1)
		for(int i = columns-2; i >= columnstart; i--)
		{
			array[*index] = input_array[rows-1][i];
			(*index)++;
		}
	if(rowstart != rows) 
		for(int i = rows-2; i > rowstart; i--)
		{
			array[*index] = input_array[i][columnstart];
			(*index)++;
		}
	assignToArray(rowstart+1, rows-1, columnstart+1, columns-1, input_array, index, array);
	return;
}




