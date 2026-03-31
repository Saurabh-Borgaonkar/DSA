#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};
int main() {

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = NULL;
    ListNode* temp = NULL;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* newNode = new ListNode{x, NULL};
        if(head==NULL){
            head=newNode;
            temp=head;
        }else{
            temp->next=newNode;
            temp=newNode;
        }
    } 
    temp=head;
    cout<<"\nbefore revrse : ";
    while(temp!=NULL){
        cout<< temp->val <<" ";
        temp=temp->next;
    }
//revrse linklist
ListNode* prev=NULL;
ListNode* curr=head;
while(curr!=NULL){
ListNode* newnode=curr->next;
curr->next=prev;
prev=curr;
curr=newnode;
}
cout<<"\nAfter revrse : ";
 while(prev!=NULL){
        cout<< prev->val <<"->";
        prev=prev->next;
    }
    cout<<"NULL";
    return 0;
}