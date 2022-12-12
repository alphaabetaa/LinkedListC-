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
            
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head->next== NULL)
        return NULL;
    
    ListNode *p = head;
    ListNode *temp = head;
    int length=0;

    while(temp!=NULL){
        length+=1;
        temp=temp->next;
    }

    if(length-n == 0)
        return head->next;
    else
    {
        int temp1=length-n-1;
        while(temp1--)
            p=p->next;
    }
        p->next = p->next->next;
    return head;
    
}
};
