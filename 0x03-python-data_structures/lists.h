#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
<<<<<<< HEAD
=======
#include <stdio.h>
#include <unistd.h>
>>>>>>> cd5d602 (Second Commit)

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
<<<<<<< HEAD
=======
 * for Holberton project
>>>>>>> cd5d602 (Second Commit)
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
<<<<<<< HEAD
listint_t *insert_node(listint_t **head, int number);
=======

void reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);
>>>>>>> cd5d602 (Second Commit)

#endif /* LISTS_H */
