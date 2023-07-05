#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to our string array input
 * @c: character to locate from input array
 * Return: first occurence of charatcer or null if not found
 */
unsigned int _strspn(char *s, char *accept)
{
       unsigned	int i, j, k;

        i = 0;
        while (s[i] != '\0')
        {
                j = 0;
                k = 1;
                while (accept[j] != '\0')
                {
                        if (s[i] == accept[j])
                        {
                                k = 0;
                                break;
                        }
                        j++;
                }
                if (k == 1)
                        break;
                i++;
        }
        return (i);
}

