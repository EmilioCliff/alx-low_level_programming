#include "main.h"
/**
 * _abs - find the absolute value of a number
 * @int - the interger to be calculated
 * Return: abs
 */
int _abs(int)
{
	int abs;

	if (abs < 0)
	{
		abs = abs * (-1);
	}
	else 
	{
		abs = abs;
	}
	return (abs);
}

