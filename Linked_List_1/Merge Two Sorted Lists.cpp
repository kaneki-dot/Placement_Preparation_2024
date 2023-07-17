/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
        if(!L1 && !L2)
            return NULL;
        if(!L1)
            return L2;
        if(!L2)
            return L1;
        ListNode* p1=L1;
        ListNode* p2=L2;
        ListNode* head=NULL;
        ListNode* tail=NULL;
        if(L1->val<=L2->val)
        {
            head=L1;
            tail=L1;
            p1=p1->next;
        }
        else
        {
            head=L2;
            tail=L2;
            p2=p2->next; 
        }
        while(p1 && p2)
        {
            if(p1->val<=p2->val)
            {
                tail->next=p1;
                p1=p1->next;
            }
            else
            {
                tail->next=p2;
                p2=p2->next;
            }
            tail=tail->next;
        }
        if(!p1)
            tail->next=p2;
        if(!p2)
            tail->next=p1;
        return head;
    }
};
