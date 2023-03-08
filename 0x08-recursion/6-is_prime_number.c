#include<stdio.h>
#include"main.h"

/**
 *check_prime - check if prime or not
 *@n: number
 *@i: int
 *Return: int
 */

int check_prime(int n, int i)
{
	if (i  > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}

/**
 *is_prime_number - check if prime or not
 *@n: number
 *Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

