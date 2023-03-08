#include<stdio.h>
#include"main.h"

/**
 *_strlen_recursion - find length of a string
 *
 *@s: pointer to char
 *Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	unsigned long int n = 0;

	if (*s)
	{
		i++;
		n = _strlen_recursion(++s);
	}
	return (i + n);
}
/**
 *check_palindrome - check
 *@start: pointer to char
 *@end: pointer to char
 *Return: int
 */
int check_palindrome(char *start, char *end)
{
	if (start > end)
		return (1);
	if (*start == *end)
	{
		start++;
		end--;
	return (check_palindrome(start, end));
	}
	return (0);

}
/**
 *is_palindrome - check if string is palindrome
 *@s: pointer to char
 *Return: int
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);
	char *start = s;
	char *end = s + n - 1;

	return (check_palindrome(start, end));
}
