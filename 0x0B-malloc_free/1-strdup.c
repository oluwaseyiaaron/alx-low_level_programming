#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: a string
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{       
        int len, i;
        char *dupstr;
        
        if (str == NULL)
                return NULL;
        
        len = 0;
        while (str[len] != '\0')
                len++;
        
        dupstr = malloc((len + 1) * sizeof(char));
        if (dupstr == NULL)
                return (NULL);
        
        i = 0;
        while (str[i] !='\0')
        {       
                dupstr[i] = str[i];
                i++;
	}
	return (dupstr);
}

