/**
 * _strchr - to locate a character in a string
 * @s: first string
 * @c: the character
 * Return: return @s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return ('\0');
}
