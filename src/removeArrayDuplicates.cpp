/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *arry, int len)
{
	int i, j, k, resize = len;
	if (arry == NULL || len <= 0)
		return NULL;
	for (i = 0; i < resize; i++)
	{
		for (j = i + 1; j < resize; j++)
		{
			if (arry[i] == arry[j])
			{
				for (k = j; k < resize - 1; k++)
				{
					arry[k] = arry[k + 1];
				}
				resize = len--;
			}
		}
	}
	return arry;
}
