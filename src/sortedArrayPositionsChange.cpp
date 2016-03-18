/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i = 0, j = len - 1, temp, temp2, temp1, flag1 = 0, flag2 = 0;
	if (Arr == NULL || len <= 0)return NULL;
	else{
		while (i<len){
			if (Arr[i]>Arr[i + 1]){
				temp = i;
				flag1 = 1;
			}
			i++;
			if (flag1 == 1)break;
		}
		while (j >= 0){
			if (Arr[j - 1]>Arr[j]){
				temp2 = j;
				flag2 = 1;
			}
			j--;
			if (flag2 == 1)break;
		}
		if (flag1 == 1 && flag2 == 1){
			temp1 = Arr[temp];
			Arr[temp] = Arr[temp2];
			Arr[temp2] = temp1;
		}

	}
	return 0;
}