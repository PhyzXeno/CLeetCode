#include <stdio.h>
#include <malloc.h>
#include "myTwoSum.h"

int main() {
    struct ListNode *l1 = (struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode *l2 = (struct ListNode *) malloc(sizeof(struct ListNode));

    l1->next = (struct ListNode *) malloc(sizeof(struct ListNode));
    l1->next->next = (struct ListNode *) malloc(sizeof(struct ListNode));
    l1->next->next->next = NULL;
    l2->next = (struct ListNode *) malloc(sizeof(struct ListNode));
    l2->next->next = (struct ListNode *) malloc(sizeof(struct ListNode));
    l2->next->next->next = NULL;

    l1->val = 8;
    l1->next->val = 9;
    l1->next->next->val = 2;
    
    l2->val = 0;
    l2->next->val = 6;
    l2->next->next->val = 7;

    printf("l1: %d->%d->%d\n", l1->val, l1->next->val, l1->next->next->val);
    printf("l2: %d->%d->%d\n", l2->val, l2->next->val, l2->next->next->val);

    struct ListNode *temp = NULL;
    temp = addTwoNumbers(l1, l2);

    printf("temp: %d->%d->%d\n", temp->val, temp->next->val, temp->next->next->val);
}
