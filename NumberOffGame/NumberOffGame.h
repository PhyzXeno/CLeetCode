//
// Created by phyzx on 2017/9/6.
//
#include <malloc.h>
#ifndef NUMBEROFFGAME_NUMBEROFFGAME_H
#define NUMBEROFFGAME_NUMBEROFFGAME_H

#endif //NUMBEROFFGAME_NUMBEROFFGAME_H

typedef struct node{
    int val;
    struct node * next;
} node_t;


void print_list(node_t * head)
{
    node_t * current = head;
    while(current != NULL)
    {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void push_to_tail(node_t * head, int val)
{
    node_t * current = head;
    while(current != NULL)
    {
        current = current->next;
    }

    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

void push_to_head(node_t ** head, int val)
{
    node_t * new_node;
    new_node = malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

int pop_from_head(node_t ** head)
{
    node_t * next_node = NULL;
    int retval = -1;

    if(*head == NULL)
    {
        return retval;
    }

    retval = (*head)->val;
    next_node = (*head)->next;
    free(*head);
    *head = next_node;

    return retval;
}

int pop_from_tail(node_t * head)
{
    int retval = 0;

    if(head->next == NULL)
    {
        retval = head->val;
        free(head);
        return retval;
    }

    node_t * current = head;
    while(current->next->next != NULL)
    {
        current = current->next;
    }

    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;
}

int remove_by_index(node_t **head, int n) {
    int retval = -1;
    int i = 0;
    node_t *current = *head;
    node_t *temp_node = NULL;

    if (n == 0)
    {
        return pop_from_head(head);
    }

    for(i = 0; i < n-1; i++)
    {
        if(current->next == NULL)
        {
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);

    return retval;
}

//int CalculateLinkListLen(node_t * head)
//{
//    int count = 0;
//    while(head->next != NULL)
//    {
//        count++;
//    }
//    return count + 1;
//}

int remove_curnext_from_list(node_t ** cur)
{
    int i = 0;
    int retval = -1;
    node_t * temp_node = NULL;
    node_t * current = *cur;

    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);
    return retval;
}

void NumberOffGame(int m, char *output)
{
    int i = 0;
    int j = 0;
    int count = 0;
    int retval = 0;
    int node_left = 100;
    node_t * current = NULL;
    node_t * head = malloc(sizeof(node_t));
    head->val = 1;
    head->next = NULL;
    current = head;


    for(i = 1; i < 100; i++)
    {
        current->next = malloc(sizeof(node_t));
        current->next->val = i + 1;
        current->next->next = NULL;
        current = current->next;
    }
    current->next = head;
//    printf("loop linked list initialized\n");

    current = head;

//    while(current->next->val > current->val)
    while(1)
    {
        count++;
        if(count == m - 1)
        {
            count = 0;
            retval = remove_curnext_from_list(&current);
//            printf("%d\n",retval);
            node_left--;
        }
        current = current->next;
        if(node_left < m)
            break;
    }

    node_t * temp_node = current;

    while(1)
    {
        if(current->val < current->next->val)
        {
            current = current->next;
            continue;
        }
        else{
            current = current->next;
            break;
        }
    }

    while(1)
    {
        if(current->val < current->next->val)
        {
//            printf("%d,", current->val);
            j += sprintf(output + j, "%d", current->val);
            j += sprintf(output + j, "%c", ',');
            current = current->next;
            continue;
        }
//        printf("%d",current->val);
        j += sprintf(output + j, "%d", current->val);
        break;
    }

//    i = 0;
//
//    while(1)
//    {
//        if(current->val < current->next->val)
//        {
//            while(current->val > 0)
//            {
//                *(output + i) = current->val % 10 + '0';
//                current->val = current->val / 10;
//                i++;
//            }
//            *(output + i) = ',';
//            i++;
//            current = current->next;
//            continue;
//        }
//        while(current->val > 0)
//        {
//            *(output + i) = current->val % 10 + '0';
//            current->val = current->val / 10;
//            i++;
//        }
//        *(output + i) = '\0';
//        break;
//    }
}
