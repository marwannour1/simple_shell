#include "main.h"

/**
 * allocateStringMemory - memory allocation
 * @arrayOfStrings: to string
 * @strSize_of_malloc: size of malloc
 * @eerrorMessage_message: error message
 * Return: the memory
 */
 void allocateStringMemory(char **arrayOfStrings, size_t strSize, str *errorMessage)
 {
     *arrayOfStrings = malloc(sizeof(char) * strSize);
     if (arrayOfStrings == NULL)
     {
		perror(errorMessage);
		return (NULL);
     }
     return(*arrayOfStrings);
 }

 /**
 * allocateArrayMemory - memory allocation
 * @arrayOfStrings: to string
 * @strSize_of_malloc: size of malloc
 * @eerrorMessage_message: error message
 * Return: the memory
 */
 void allocateArrayMemory(char **arrayOfStrings, size_t strSize, str *errorMessage)
 {
     *arrayOfStrings = malloc(sizeof(char *) * strSize);
     if (arrayOfStrings == NULL)
     {
		perror(errorMessage);
		return (NULL);
     }
     return(arrayOfStrings);
 }

