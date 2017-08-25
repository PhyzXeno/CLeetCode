//
// Created by phyzx on 2017/8/25.
//

#ifndef TWOSUM_MYTWOSUM_H
#define TWOSUM_MYTWOSUM_H

#endif //TWOSUM_MYTWOSUM_H

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* ans = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p = NULL;
    int c = 0;
    int s = 0;

    while(l1 != NULL || l2 != NULL || c != 0)
    {
        if(p == NULL)
        {
            p = ans;
            p->val = 0;
            p->next = NULL;
        }
        else{
            p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->next->val = 0;
            p = p->next;
        }
        int a = l1 != NULL ? l1->val : 0;
        int b = l2 != NULL ? l2->val : 0;
        int s = (a + b + c) % 10;
        c = (a + b + c) / 10;

        p->val = s;
        p->next = NULL;
        l1 = l1 != NULL ? l1->next : NULL;
        l2 = l2 != NULL ? l2->next : NULL;
    }
    return ans;
}