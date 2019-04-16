/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *Carrier , *head = l1;
    Carrier = (struct ListNode *)malloc(1*sizeof(struct ListNode));

    Carrier->val = 0;
    Carrier->next =NULL;
    do {
        
        if(Carrier->val) {
            l1->val += Carrier->val;
            Carrier->val = 0;
        }
        
        if(l2 != NULL)
            l1->val += l2->val;
            
        if(l1->val > 9) {
            Carrier->val = 1;
            l1->val -= 10;
        }
        
        if(l2 == NULL) {
            if(l1->next == NULL) {
                if (Carrier->val) {
                    l1->next = Carrier;
                    break;
                }
                else {
                    l1->next = NULL;
                }
            }
            l1 = l1->next;
        }
        else {
            if(l1->next == NULL && l2->next == NULL) {
                if (Carrier->val) {
                    l1->next = Carrier;
                }
                else {
                    l1->next = NULL;
                }
                break;
            } else if(l1->next == NULL && l2->next ) {
                l1->next = l2->next;
                l2->next = NULL;
            }

            l1 = l1->next;
            l2 = l2->next;
        }
    } while(l1 != NULL);
    
    return head;
}