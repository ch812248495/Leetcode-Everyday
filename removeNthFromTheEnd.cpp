// Given a linked list, remove the n-th node from the end of list and return its head.

// Example:

// Given linked list: 1->2->3->4->5, and n = 2.

// After removing the second node from the end, the linked list becomes 1->2->3->5.
// Note:

// Given n will always be valid.
#include "head.cpp"

ListNode* removeNthFromEnd(ListNode* head, int n)
{
    ListNode* result = NULL;
    if(n == 0 || head == NULL)
        return result;
    ListNode* fast = head;
    ListNode* slow = head;
    ListNode* pre = head;
    while(n--)
    {
        fast = fast->next;
    }
    while(fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    if(slow == head)
    {
        return head->next;
    }
    while(pre->next != slow)
        pre = pre->next;
    pre->next = slow->next;
    delete slow;
    return head;
}