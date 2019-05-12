/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *quick, *slow;
        quick = slow = head;
        while(quick && quick->next) {
            quick = quick->next->next;
            slow = slow->next;
            if(quick == slow)
                break;
        }
        if(!quick || !quick->next)
            return NULL;
        slow = head;
        while(quick != slow) {
            quick = quick->next;
            slow  = slow->next;
        }    
        return quick;
    }
};