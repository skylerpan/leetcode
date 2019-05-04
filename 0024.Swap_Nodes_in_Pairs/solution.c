/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *ptr = head, *ptr2 = head, *tmp, *last = NULL;
    if(head && head->next)
        head = head->next;
    while(ptr != NULL)
    {
        if(ptr->next) {
            ptr2 = ptr->next;
            tmp = ptr2->next;

            ptr2->next = ptr;
            ptr->next = tmp;
            
            if(last)
                last->next = ptr2;
            last = ptr;
            ptr = tmp;
        }
        else
            break;
    }
    return head;
}