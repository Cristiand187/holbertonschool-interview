#include "lists.h"

/**
* recurse_list - 
* @left: Keeps track of left side of list
* @right: Keeps track of nodes on right
*
* Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/

int recurse_list(listint_t **left, listint_t *right)
{
	int result;

	if (right == NULL)
	{
		return (1);
	}

	result = recurse_list(left, right->next) && (*left)->n == right->n;

	*left = (*left)->next;

	return (result);
}

/**
* is_palindrome - Checks if LL is a palindrome
* @head: Double pointer to head of list
* Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/

int is_palindrome(listint_t **head)
{
	listint_t *deref = *head;
	return (recurse_list(&deref, deref));
}
