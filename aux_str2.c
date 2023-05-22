#include "main.h"

char *_strdup(const char *s);
char _strlen(const char *s);
int _isdigit(const char *s);
int _strcmp(char *str1, char *str2);


/**
 * _strdup - the function duplicates a string
 * @s: the string that we are duplcating
 *
 * Return: the function returns a pointer to the duplicate string
 */

char *_strdup(const char *s)
{
	int len;
	char dup_str;

	if(s == NULL)
		return(NULL);

	len = 0;
	while(*s)
	{
		len++;
		s++;
	}
	dup_str = malloc(sizeof(char) * (len + 1));
	if(dup_str == NULL)
		return(NULL);

	return(dup_str);
}

/**
 * _strlen- the function calculates the length of a string
 * @s: the string we are calculating the length
 *
 * Return: the function returns the length of the string
 */

int _strlen(const char *s)
{
	int len, i;

	len = 0;

	for(i = 0; s[i]; i++)
		len++;

	return(len);
}

/**
 * _strcmp- the function compares two strings
 * @str1: the first string
 * @str2: the second string
 *
 * Return: returns -1 if str1 < str2, returns 1 if str1 > str2
 * returns 0 if str1 == str2
 */

int _strcmp(char *str1, char *str2)
{
	while(*str1 && *str2)
	{
		if(*str1 != str2)
			return(*str1 - str2);
		str1++;
		str2++;
	}
	if(*str1 == str2)
		return(0);
	else
		return (*str1 < *str2 ? -1 : 1);
}
