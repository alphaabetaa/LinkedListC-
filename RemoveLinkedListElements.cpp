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
    ListNode* removeElements(ListNode* head, int val) {
       ListNode* temp=head;
       if(head==NULL)
        return NULL;
       while(temp!=NULL && temp->next!=NULL)
       {
           if(temp->next->val == val)
             temp->next=temp->next->next;
           else
             temp=temp->next; 
       }
       if(head->val==val)
       {
            head=head->next;
       }
       return head;
    }
};
