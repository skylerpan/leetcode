int cmp_list_first_node(struct ListNode* l1, struct ListNode* l2)
{
    if(l1 && l2)
        return l1->val - l2->val;
    else if(!l1)
        return 1;
    else
        return -1;
}

struct ListNode* insert_node(struct ListNode* front, struct ListNode* back)
{
    front->next = back;
    return back->next;
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* head, *merged;
    
    if(!l1 && !l2)
        return NULL;

    if(cmp_list_first_node(l1, l2) < 0)
    {
        head = l1;
        l1 = l1->next;
    }
    else {
        head = l2;
        l2 = l2->next;
    }
    
    merged = head;

    while(l1 || l2)
    {
        if(cmp_list_first_node(l1, l2) < 0)
        {
            l1 = insert_node(merged, l1);
        }
        else
        {   
            l2 = insert_node(merged, l2);
        }
        merged = merged->next;
    }
    return head;
}