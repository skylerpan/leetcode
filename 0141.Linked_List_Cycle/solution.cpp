/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#if 1
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *quick, *slow;
        quick = slow = head;
        
        do{
            if(quick && quick->next)
                quick = quick->next->next;
            else
                return false;
            if(slow)
                slow = slow->next;
            else
                return false;
        }while(quick != slow);
        
        return true;
    }
};
#else
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *quick, *slow;
        quick = slow = head;
        
        do {
            if(quick && quick->next)
                quick = quick->next->next;
            else
                return false;
            if(slow)
                slow = slow->next;
            else
                return false;
        }while(quick != slow);
        
        slow = head;
        
        while(quick != slow){
            quick = quick->next;
            slow  = slow->next;
        }
        
        return quick; // find the cycle's first node.
    }
};
#endif