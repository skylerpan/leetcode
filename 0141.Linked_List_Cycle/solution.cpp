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
        ListNode *quicker, *slower;
        quicker = slower = head;
        
        do{
            if(quicker && quicker->next)
                quicker = quicker->next->next;
            else
                return false;
            if(slower)
                slower = slower->next;
            else
                return false;
        }while(quicker != slower);
        
        return true;
    }
};
#else
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *quicker, *slower;
        quicker = slower = head;
        
        do {
            if(quicker && quicker->next)
                quicker = quicker->next->next;
            else
                return false;
            if(slower)
                slower = slower->next;
            else
                return false;
        }while(quicker != slower);
        
        slower = head;
        
        do {
            quicker = quicker->next;
            slower  = slower->next;
        }while(quicker != slower);
        
        return quicker; // find the cycle's first node.
    }
};
#endif