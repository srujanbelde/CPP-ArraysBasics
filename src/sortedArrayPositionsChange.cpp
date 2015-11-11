/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *arry, int len)
{
	int i, position[2] = { 0, 0 }, j, lesscount = 0, k = -1, temp;
	if (arry && len>0){
		for (i = 0; i < len; i++)
		{
			for (j = 0; j < len; j++)
			{
				if (arry[j] < arry[i])
					lesscount++;
			}
			if (lesscount != i)
			{
				position[++k] = i;
			}
			lesscount = 0;
		}
		temp = arry[position[0]];
		arry[position[0]] = arry[position[1]];
		arry[position[1]] = temp;
	}
	else
		return NULL;
}