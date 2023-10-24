#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of a list
 * Return: no return
 */

void free_list(list_t **head)
{
	list_t *temp;
	list_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the head of the listint_t to check
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	list_t *hptr, *new, *aff;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_list(&hptr);
	return (nnodes);
}

