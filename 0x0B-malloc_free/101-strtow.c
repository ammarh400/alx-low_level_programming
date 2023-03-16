#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *get_words - get words
 *@s: pointer to char
 *Return: int
 */

int get_words(char *s)
{
	int index = 0;
	int words = 0;
	int flag = 0;

	while (s[index] != '\0')
	{
		while (s[index] == ' ' &&  s[index + 1] != '\0')
		{
			if (flag == 1)
			{
				words++;
				flag = 0;
			}
			index++;
		}
		index++;
		flag = 1;
	}
	if (s[index - 1] != ' ' && index != 0)
		words++;

	if (words == 0)
		return (0);

	return (++words);
}
/**
 *allocate_wordlength - allocate
 *@s: pointer to char
 *@words: words
 *Return: pointer to int
 */
int *allocate_wordlength(char *s, int words)
{
	int index = 0;
	int count = 0;
	int len_of_word = 0;
	int flag = 0;
	int *ptr1 = malloc(sizeof(int) * (words - 1));

	while (s[index] != '\0')
	{
		while (s[index] == ' ' && s[index + 1] != '\0')
		{
			if (flag == 1)
			{
				ptr1[count] = len_of_word + 1;
				len_of_word = 0;
				flag = 0;
				count++;
			}
			index++;
		}
		len_of_word++;
		index++;
		flag = 1;
		if (count == (words - 1))
			break;
	}
		return (ptr1);
}
/**
 *_malloc - malloc
 *@str: pointer to pointer to char
 *@ptr: pointer to int
 *@words: no of words
 *Return: pointer to pointer to char
 */

char **_malloc(char **str, int *ptr, int words)
{
	int k = 0;

	str = malloc(sizeof(char *) * words);

	for (; k < (words - 1); k++)
	{
		str[k] = malloc(sizeof(char) * ptr[k]);
			if (str[k] == NULL)
			{
				for (; k >= 0; k--)
				{
					free(str[k]);
				}
			free(str);
			return (NULL);
			}
	}
	str[k] = NULL;
	return (str);
}

/**
 *strtow - funstion to
 *
 *@s: pointer to char
 *Return: pointer to pointer to char
*/

char **strtow(char *s)
{
	int words = 0;
	int index = 0;
	int flag = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int *ptr;
	char **str = NULL;

	words = get_words(s);
	if (words == 0)
		return (NULL);
	ptr = allocate_wordlength(s, words);
	str = _malloc(str, ptr, words);
	while (s[index] != '\0')
	{
		while (s[index] == ' ' && s[index + 1] != '\0')
		{
			if (flag == 1)
			{
				str[i][j] = '\0';
				i++;
				j = 0;
				flag = 0;
				k++;
			}
			index++;
		}

		if (k == words - 1)
			break;

		str[i][j] = s[index];
		j++;
		index++;
		flag = 1;
	}

	return (str);
}
