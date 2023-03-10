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
 *main - mul to number
 *@argc: number of arguments
 *@argv: array of pointer to char
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int n1 = 0;
	int n2 = 0;
	int result = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;
	printf("%d\n", result);

	return (0);
}
