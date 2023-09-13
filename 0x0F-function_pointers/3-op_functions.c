#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of two numbers.
 * @a: The first number
 * @b: The second number
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of two numbers.
 * @a: The first number.
 * @b: The second number
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus
 * @a: The first number.
 * @b: The second number.
 * Return: modulus of first number
 */
int op_mod(int a, int b)
{
	return (a % b);
}