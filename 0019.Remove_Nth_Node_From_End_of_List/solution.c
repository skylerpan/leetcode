/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* target = head, *ptr = head;
    int interval = n + 1;
    
    if(n == 0 || head == NULL)
        return head;
    
    while(ptr != NULL)
    {
        if(interval)
            interval--;
        else
            target = target->next;
        ptr = ptr->next;
    }

    if(target == head && interval != 0)
    {
        if(interval - 1 > 0)
            return head;
        else
            head = target->next;
    }
    else {
        ptr = target->next;
        target->next = target->next->next;
    }
    free(ptr);
    return head;
}