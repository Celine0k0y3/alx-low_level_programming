#include "lists.h"
#include <stdio.h>


/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the list_t list to print
 * Description: If str is NULL, print [0] (nil)
 * @Format: See exmaple 0-main.c
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		/*spaces preffered around - | >*/
		h = h->next;
		s++;
	}

	return (s);
}
