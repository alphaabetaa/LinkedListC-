#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
int main()
{
    Node* head = new Node(10);  
    head->next= new Node(40);
    head->next->next= new Node(50);
    head->next->next->next=new Node(69);
    head->next->next->next->next= new Node(401);
    //method1
//     int count=0;
//     Node* curr=head;
//     while(curr!=NULL)
//     {
//         count++;
//         curr=curr->next;
//     }
//   int mid=count/2;
//     while(mid--)
//     {
//         head=head->next;
//     }
//     cout << head->data;

    //method2
    Node* slow=head;
    Node* fast=head;
    while(fast != NULL &&  fast->next != NULL )
    {
        slow=slow->next;
        fast=fast->next->next;
        
    }
    cout << slow->data;
    return 0;
}
