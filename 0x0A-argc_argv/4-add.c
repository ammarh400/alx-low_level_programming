#include<stdio.h>
#include<stdlib.h>
/**
 *_atoi - converts a string to int
 *@str: pointer to char
 *Return: int
 */


int _atoi(char *str)
{
	unsigned int n = 0;
	int  i = 0, sign_count = 0;
	int flag = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 48 || str[i] > 58)
		{
			return (-1);
		}
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 48 && str[i] <= 58)
		{
			n = (n * 10) + (str[i] - '0');
			flag = 1;
		}
		else if (flag == 1)
		{
			break;
		}
		if (str[i] == '-')
		{
		sign_count++;
		}
	}
	if (sign_count % 2 != 0)
	{
		return (-1 * n);
	}
	if (flag == 0)
	{
		return (0);
	}
	return (n);
}

/**
 *main - add numbers
 *@argc: number of arguments
 *@argv: array of pointer to char
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0, n = 0, sum = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			n = _atoi(argv[count]);

			if (n == -1)
			{
				printf("Error\n");
				return (1);
			}
			sum += n;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
