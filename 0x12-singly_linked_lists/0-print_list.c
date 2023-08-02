#include "lists.h"
/**
 * print_list - to print the element of a singly linked list
 * @h: pointer to the string
 * Return: number of the nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
		}
		else
			print("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}

