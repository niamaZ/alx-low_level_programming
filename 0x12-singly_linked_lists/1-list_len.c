#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @k: pointer to the list_t list
 *
 * Return: number of elements in k
 */
size_t list_len(const list_t *k)
{
	size_t i = 0;

	while (k)
	{
		i++;
		k = k->next;
	}
	return (i);
}
