#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "menger.h"
/**
 * menger - function to creat a menger
 * @level: is the depth of the menger
 * Return: Nothing
 */
void menger(int level)
{
	int size;
	int i;
	int j;
	int k;
	int x;
	int flag;

	size = pow(3, level);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			k = i;
			x = j;
			flag = 0;
			while (k >= 1 || x >= 1)
			{
				if (k % 3 == 1 && x % 3 == 1)
				{
					flag = 1;
					printf(" ");
					break;
				}
				k = k / 3;
				x = x / 3;
			}
			if (flag == 0)
				printf("%c", '#');
		}
		printf("\n");
	}
}
