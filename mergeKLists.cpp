// Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

// Example:

// Input:
// [
//   1->4->5,
//   1->3->4,
//   2->6
// ]
// Output: 1->1->2->3->4->4->5->6
#include "head.cpp"

struct cmp
{
    bool operator()(ListNode* a, ListNode* b)
    {
        return a->val > b->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists)
{
    if(lists.size() == 0)
        return NULL;
    priority_queue<ListNode*, vector<ListNode*>, cmp> p;
    ListNode* head = new ListNode(0);
    ListNode* ptr = head;
    for(int i = 0; i < lists.size(); i++)
    {
        if(lists[i])
            p.push(lists[i]);
    }
    while(!p.empty())
    {
        ptr->next = p.top();
        ptr = ptr->next;
        p.pop();
        if(ptr->next) p.push(ptr->next);
    }
    return head->next;
}