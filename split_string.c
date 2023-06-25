#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * splitString - function that splits the string
 * @str: first parameter
 * @wordCount: second parameter
 *
 * main - function prototype
 * Return: Always 0,:wq
 *
 */

char ** splitString(const char* str, int* wordCount)
{
	wordCount;
	const char* delimiter = "\t\n";//Whtespace characters
	char* copy = strdup(str);//Creates a cp of the ip str
	char* token = strtok(copy, delimiter);
	while (token != NULL)
	{
		(*wordCount)++;
		token = strtok(NULL, delimiter);
	}

	//Allocate memory for the array of words
	char** words = (char**)malloc(*wordCount * sizeof(char*));

	//Split the string and store each word in the array
	token = strtok(strdup(str), delimiter);
	for (int i = 0; i < *wordCount; i++)
	{
		words[i] = strdup(token);
		token = strtok(NULL, delimiter);
	}

	free(copy); //Free the copied string

	return words;
}

int main(void)
{
	const char* input = "Hello, how are you today?";
	int wordCount;
	char** words = splitString(input, &wordCount);

	printf("Input string: %s\n", input);
	printf("Word count: %d\n", wordCount);
	printf("Words:\n");

	for (int i = 0; i < wordCount; i++)
	{
		printf("%s\n", words[i]);
		free(words[i]); // Free ea word string
	}
	free(words); //Free the array of words

	return (0);
}
