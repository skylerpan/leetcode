/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#if 1
void append_node(ListNode* &tp, ListNode* &head)
{
    tp->next = head;
    head = head->next;
    tp = tp->next;
    tp->next = NULL;
}
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
                struct ListNode* les_h =  new ListNode(0);
                struct ListNode* geq_h =  new ListNode(0);
                struct ListNode *lp = les_h, *gp = geq_h;

                while(head){
                    if(head->val < x)   
                        append_node(lp, head);
                    else
                        append_node(gp, head);
                }

                lp->next = geq_h->next;
                head = les_h->next;

                delete les_h;
                delete geq_h;
    
                return head;
        }
};
#else
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
                struct ListNode *les_h = new ListNode(0);
                struct ListNode *geq_h = new ListNode(0);
                struct ListNode *lp = les_h, *gp = geq_h;

                while(head){
                    if(head->val < x)   
                    {
                        lp->next = head;
                        head = head->next;
                        lp = lp->next;
                        lp->next = NULL;
                    }
                    else
                    {
                        gp->next = head;
                        head = head->next;
                        gp = gp->next;
                        gp->next = NULL;
                    }    
                }

                lp->next = geq_h->next;
                head = les_h->next;

                delete les_h;
                delete geq_h;
    
                return head;
        }
};
#endif