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
    ListNode* reverseList(ListNode* head) {
        if(head->next==NULL || head==NULL)
            return head;
        else
        {
                ListNode * headOfReversedList=reverseList(head->next);
        ListNode * nextNode=head->next;
        ListNode * currentNode=head;
        nextNode->next=currentNode;
        currentNode->next=NULL;
        return headOfReversedList;
        }
    }
};
