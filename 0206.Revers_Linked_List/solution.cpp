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
    ListNode* reverseList(ListNode* head) {
        ListNode *ans = NULL;
        if(ans == NULL)
            ans = head;
        if(ans != NULL) {
            head = head->next;
            ans->next = NULL;
        }
        while(head) {
            ListNode *tmp = head->next;
            head->next = ans;
            ans = head;
            head = tmp;
        }
        return ans;
    }
};