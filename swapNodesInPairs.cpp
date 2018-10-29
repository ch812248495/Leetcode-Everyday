// Given a linked list, swap every two adjacent nodes and return its head.

// Example:

// Given 1->2->3->4, you should return the list as 2->1->4->3.
// Note:

// Your algorithm should use only constant extra space.
// You may not modify the values in the list's nodes, only nodes itself may be changed.

#include "head.cpp"
ListNode* seqpPairs(ListNode* head)
{
    if(!head)
        return NULL;
    if(head->next == NULL)
        return head;
    ListNode* l1 = new ListNode(0);
    ListNode* dummy = l1;
    l1->next = head;
    ListNode* l2 = head;
    while(l2 && l2->next)
    {
        ListNode* newStart = l2->next->next;
        l1->next = l2->next;
        l2->next->next = l2;
        l2->next = newStart;
        l1 = l2;
        l2 = l2->next;
    }
    return dummy->next;
}