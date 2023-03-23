#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * positive_or_negative - Determines if a number is positive, negative or zero.
 * @i: the integer to pass
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	int n = i;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
