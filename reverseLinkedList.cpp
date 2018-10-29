#include "head.cpp"

ListNode* reverse(ListNode* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode* pre = NULL;
    ListNode* ptr = head;
    ListNode* latter = NULL;
    while(ptr)
    {
        latter = ptr->next;
        ptr->next = pre;
        pre = ptr;
        ptr = latter;
    }
    return pre;   
}