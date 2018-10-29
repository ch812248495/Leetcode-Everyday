// Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

// Example:

// Input: 1->2->4, 1->3->4
// Output: 1->1->2->3->4->4
#include "head.cpp"

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    ListNode* a = l1;
    ListNode* b = l2;
    ListNode* N = new ListNode(0);
    ListNode* head = N;
    while(a && b)
    {
        if(a->val <= b->val)
        {
            N->next = a;
            a = a->next;
            N = N->next;
        }
        else if(a->val > b->val)
        {
            N->next = b;
            b = b->next;
            N = N->next;
        }
    }
    if(a)
    {
        N->next = a;
    }
    if(b)
    {
        N->next = b;
    }
    return head->next;
}