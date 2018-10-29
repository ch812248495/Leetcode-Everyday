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
    ListNode* pre;
    ListNode* lat;
    pre = head;
    lat = head;
    while(lat && pre)
    {
        lat = pre->next;
        lat->next = pre;
    }
}