#include<stdio.h>
#include"main.h"

/**
 *isPerfectSquare - check if perfect square
 *@lo: int lo
 *@hi: int hi
 *@num: int num
 *Return: int
 */
int isPerfectSquare(int lo, int hi, unsigned long int num)
{
	unsigned long int mid = (hi + lo) / 2;

	if (num == 1)
	{
		return (1);
	}
	if (lo * lo == num)
	{
		return (lo);
	}
	if (hi * hi == num)
	{
		return (hi);
	}
	if ((hi - lo) < 1)
	{
		return (-1);
	}
	else if (mid * mid == num)
	{
		return (mid);
	}
	else if (mid * mid > num)
	{
		return (isPerfectSquare(lo, mid - 1, num));
	}
	else if (mid * mid < num)
	{
		return (isPerfectSquare(mid + 1, hi, num));
	}
	return (0);
}

/**
 *_sqrt_recursion - return sqrt of a number
 *
 *@n: num
 *Return: int
 */

int _sqrt_recursion(int n)
{

	int lo = 1;
	int hi = n;
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}

	x = isPerfectSquare(lo, hi, n);


	return (x);
}
