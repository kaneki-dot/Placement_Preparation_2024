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
    
    ListNode* solve(ListNode* temp,int n,int k)
    {
        if(n<k)
            return temp;
        else
        {
            int t=k;
            ListNode* prev=NULL;
            ListNode* curr=temp;
            while(t--)
            {
                ListNode* r=curr->next;
                curr->next=prev;
                prev=curr;
                curr=r;
            }
            temp->next=solve(curr,n-k,k);
            return prev;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* p=head;
        int n=0;
        while(p)
        {
            p=p->next;
            n++;
        }
        return solve(head,n,k);
    }
};
