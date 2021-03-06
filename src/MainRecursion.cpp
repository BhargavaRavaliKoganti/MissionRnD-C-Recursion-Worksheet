#include "stdafx.h"
#include <stdlib.h>

#include "FunctionHeaders.h"

int main(){
	
	//Check NSnipers

	//Check CountPairs Sample Code 
	int pairs = count_pairs_wrapper("ababa", 5);
	printf("Pairs->%d\n", pairs);
	//Check Steps Sample Code
	int count = get_steps(5);
	printf("get_steps->%d\n", count);
	//Check Spiral Sample Code

	//Check Maze Sample Code
	int maze[4][3] = {
		{ 0, 0, 1 },
		{ 1, 1, 1 },
		{ 1, 0, 1 },
		{ 1, 0, 1 }
	};

	int m = 4, n = 3;
	int x1 = 3, y1 = 0, x2 = 0, y2 = 2;

	int check=path_exists(&maze[0][0], m, n, x1, y1, x2, y2);
	printf("%d\n", check);

	
	return 0;
}