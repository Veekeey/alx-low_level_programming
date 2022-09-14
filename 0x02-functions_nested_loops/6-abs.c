#include "main.h"
/**
 * _bs - calculate the absolutevalue of the number from zero.
 * @i: the interger to be converted.
 * Return: absolute value of the input number
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
