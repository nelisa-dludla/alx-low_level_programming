#ifndef CALC_H
#define CALC_H

#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Function returns the sum of a and b
 * @a: Num1
 * @b: Num2
 * Return: sum
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - Function returns the difference of a and b
 * @a: Num1
 * @b: Num2
 * Return: diff
 */

int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - Function returns the product of a and b
 * @a: Num1
 * @b: Num2
 * Return: prod
 */

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - Function returns the result of the division of a by b
 * @a: Num1
 * @b: Num2
 * Return: res
 */

int op_div(int a, int b)
{
	int res;

	res = a / b;
	return (res);
}

/**
 * op_mod - Function returns the remainder of the division of a by b
 * @a: Num1
 * @b: Num2
 * Return: rem
 */
int op_mod(int a, int b)
{
	int rem;

	rem = a % b;
	return (rem);
}

#endif /* CALC_H */
