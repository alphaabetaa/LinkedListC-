#include<bits/stdc++.h>
using namespace std;
struct Node{
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
    while(head!=NULL)
    {
        cout << head->data << " ";
        head=head->next;
        
    }
}
