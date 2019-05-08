#include <map>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr = headA;
        hash_table.clear();
        while(ptr != NULL) {
            hash_table[ptr] = ptr->val;
            ptr = ptr->next;
        }
        ptr = headB;
        while(ptr != NULL) {
            if(hash_table.find(ptr) != hash_table.end())
                return ptr;
            ptr = ptr->next;
        }
        return NULL;
    }
private:
    map<ListNode*,int> hash_table;
};