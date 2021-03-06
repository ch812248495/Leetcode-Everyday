// You are given two non-empty linked lists representing two non-negative integers. 
// The digits are stored in reverse order and each of their nodes contain a single digit. 
// Add the two numbers and return it as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Example:

// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.

#include "head.cpp"
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    int extra = 0;
    ListNode* l = new ListNode(0);
    ListNode* mark = l;
    while(l1 || l2 || extra)
    {
        int val = (l1?l1->val:0) + (l2?l2->val:0) + extra;
        extra = val/10;
        l->next = new ListNode(val%10);
        l = l->next;
        if(l1 != NULL)
            l1 = l1->next;
        if(l2 != NULL)
            l2 = l2->next;
    }
    return mark->next;
}