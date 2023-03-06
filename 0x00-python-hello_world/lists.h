# ifndef LIST_H
# define LIST_H

#include <stdlib.h>
/**
 *struct listint_s  - singly linked list
 * @n: integer
 *
 * Description: singly linked list node structure
 *
 *
 * 
 */
 
typedef struct listin_s
{
	int n;
	struct listin_s *next;
}listint_t;

size_t print_listin(const listin_t *h);
listint_t *add_nodeint(listint_ **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LIST_H */
