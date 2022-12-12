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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(headA==NULL||headB==NULL)
        return NULL;
    ListNode* tmp1 = headA;
    int count = 0;
    int count2 = 0;
    while(tmp1){
        tmp1 = tmp1->next;
        count++;
    }
    tmp1 = headB;
     while(tmp1){
        tmp1 = tmp1->next;
        count2++;
    }
    if(count>count2){
        int d = count-count2;
        while(d>0){
            headA = headA->next;
            d--;
        }
    }
    else{
        int d = count2-count;
        while(d>0){
            headB = headB->next;
            d--;
        }
    }
    while(headA){
        if(headA == headB)
            return headA;
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
    
}
};
