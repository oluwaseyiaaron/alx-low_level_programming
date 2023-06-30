#include "main.h"
/**
 * _strncat - to concatenate two strings with n bytes
 * @dest: source string
 * @src: destination string with n bytes
 * Reurn: return a pointeer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int i, j;

        i = 0;
        while (dest[i] != '\0')
                i++;

        j = 0;
        while (j < n && src[j] != '\0')
        {
                dest[i + j] = src[j];
                j++;
		i++;
        }
        return (dest);
}

