#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * is_palindrome - check if a singly list is a palindrome
 * @head: list
 * Return: 0 or 1
 */
int is_palindrome(listint_t **head)
{
    listint_t *s = NULL, *e = NULL, *tmp = NULL;
    
    s = *head;
    while(s != tmp && s != e)
    {
        tmp = e;
        e = s;
        while (e->next != tmp)
            e = e->next;
        if (s->n != e->n)
            return (0);
        s = s->next;
    }
    return (1);
}
