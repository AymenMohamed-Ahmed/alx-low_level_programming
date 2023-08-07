#include <stdlib.h>

/**
* word_count - Counts the number of words in a string
* @str: The string to count
*
* Return: The number of words in the string
*/
int word_count(char *str)
{
int i, wc = 0, in_word = 0;

for (i = 0; str[i] != '\0'; ++i)
{
if (str[i] == ' ')
{
in_word = 0;
}
else if (in_word == 0)
{
in_word = 1;
++wc;
}
}

return (wc);
}

/**
* word_len - Calculates the length of a word in a string
* @str: The string containing the word
*
* Return: The length of the word
*/
int word_len(char *str)
{
int len = 0;

while (str[len] != '\0' && str[len] != ' ')
{
++len;
}

return (len);
}

/**
* copy_word - Copies a word from a string into a new string
* @dest: The destination string
* @src: The source string
*
* Return: A pointer to the destination string
*/
char *copy_word(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0' && src[i] != ' '; ++i)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
* free_words - Frees an array of strings
* @words: The array of strings to free
*
* Return: nothing
*/
void free_words(char **words)
{
int i;

for (i = 0; words[i] != NULL; ++i)
{
free(words[i]);
}
free(words);
}

/**
* strtow - Splits a string into words
* @str: The string to split
*
* Return: A pointer to an array of strings (words)
*/
char **strtow(char *str)
{
int i, j, wc, len;
char **words;

if (str == NULL || str[0] == '\0')
{
return (NULL);
}

wc = word_count(str);
if (wc == 0)
{
return (NULL);
}

words = malloc((wc + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

for (i = 0, j = 0; i < wc; ++i)
{
while (str[j] != '\0' && str[j] == ' ')
{
++j;
}

len = word_len(str + j);
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
free_words(words);
return (NULL);
}

copy_word(words[i], str + j);
j += len;
}
words[i] = NULL;
return (words);
}
