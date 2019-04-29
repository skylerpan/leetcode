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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p1 = head, *p2;
        
        if(p1 == NULL)
            return p1;
        else
            p2 = p1->next;
        
        while(p2 != NULL)
        {
            if(p1->val == p2->val) {
                p1->next = p2->next;
                delete(p2);
            }
            else {
                p1 = p2;
            }
            p2 = p1->next;
        }
        return head;
    }
};