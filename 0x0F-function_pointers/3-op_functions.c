#include "3-calc.h"

/**
 * op_add - adds two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: integer.
 */

int op_add(int a, int b)
{

	int res = a + b;

	return (res);
}

/**
 * op_sub - subtracts two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: integer.
 */

int op_sub(int a, int b)
{

	int res = a - b;

	return (res);
}

/**
 * op_mul - multiplies two integers.
 * @a: first integer.
 * @b: second int.
 * Return: res.
 */

int op_mul(int a, int b)
{
	int res = a * b;

	return (res);
}

/**
 * op_div - division of a nd b.
 * @a: first int.
 * @b: second int.
 * Return: res.
 */

int op_div(int a, int b)
{
	int res = a / b;

	return (res);
}

/**
 * op_mod - modulus of a by b.
 * @a: first int.
 * @b: second int.
 * Return: integer.
 */

int op_mod(int a, int b)
{
	int res = a % b;

	return (res);
}
