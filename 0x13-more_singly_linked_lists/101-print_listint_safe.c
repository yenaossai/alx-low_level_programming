#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the head of the listint_t to check
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *current = head;

	while (current)
	{
		num++;
		printf("[%p} %d\n", (void *)current, current->n);

		const listint_t *check = head;
		size_t i = 0;
		while (i < count)
		{

		if (check == current)
		{
			printf("-> [%p] 5d\n", (void *)current, current->n);
				exit(98);
		}
		check = check->next;
		i++;
		}

		current = current->next;
	}

	return (num);

}
