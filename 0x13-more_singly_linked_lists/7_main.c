#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students. 
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h
