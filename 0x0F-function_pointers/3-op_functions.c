#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"

/**
 * op_add - add two numbers
 *@b: int
 *@a: int
 *Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - sub two numbers
 *@a: int
 *@b: int
 *Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - mul two numbers
 *@a: int
 *@b: int
 *Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - div two numbers
 *@a: int
 *@b: int
 *Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a / b);
}

/**
 *op_mod - mod two numbers
 *@a: int
 *@b: int
 *Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a % b);
}


