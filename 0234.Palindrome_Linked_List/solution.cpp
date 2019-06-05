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
    bool isPalindrome(struct ListNode* head){
        struct ListNode *fast, *stack = NULL, *tmp;
        fast = head;
        if(!head || head->next == NULL)
            return true;
        while(fast)
        {
            if(fast != NULL)
            {
                if(fast->next != NULL) {
                    fast = fast->next->next;
                    if(stack == NULL) {
                        stack = head;
                        head = head->next;
                        stack->next = NULL;
                    }
                    else  {
                        tmp = head->next;
                        head->next = stack;
                        stack = head;
                        head = tmp;
                    }
                }
                else {
                    head = head->next;
                    break;
                }
            }
        }

        while(1)
        {
            if(stack && head) 
            {
                if(stack->val != head->val)
                    return false;
                else {
                    stack = stack->next;
                    head = head->next;
                    if(!stack && !head)
                        return true;
                }
            }
        }
    }
};