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
    // void swap(ListNode* a, ListNode* b)
    // {
    //     int x=a->data;
    //     a->data=b->data;
    //     b->data=x;

    // }
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        if(temp==NULL)
           return NULL;
        if(temp->next==NULL)
           return temp;
        if(temp->next->next==NULL)
        {
            int x=temp->val;
            temp->val=temp->next->val;
            temp->next->val=x;
            return head;
        }   
        while(temp!=NULL && temp->next!=NULL)
        {
            int x=temp->val;
            temp->val=temp->next->val;
            temp->next->val=x;
            temp=temp->next->next;
        }
        return head;
    }
};
