#include "main.h"
#include <stdio.h>
/**
 * abs - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
