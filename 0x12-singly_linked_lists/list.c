#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        count++;
    }
    return count;
}

size_t list_len(const list_t *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        h = h->next;
        count++;
    }
    return count;
}

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return NULL;
    }
    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;
    return new_node;
}

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return NULL;
    }
    new_node->len = strlen(str);
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return new_node;
    }
    list_t *last_node = *head;
    while (last_node->next != NULL)
    {
        last_node = last_node->next;
    }
    last_node->next = new_node;
    return new_node;
}

void free_list(list_t *head)
{
    list_t *current = head;
    while (current != NULL)
    {
        list_t *next = current->next;
        free(current->str);
        free(current);
        current = next;
    }
}

