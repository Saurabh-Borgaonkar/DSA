#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

Node* head=NULL;
void push_back(int val){
    if(head==NULL){
        Node* newNode=new Node(val);
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
}
void push_front(int val){
Node* newNode=new Node(val);
if(head==NULL){
    head=newNode;
    return;
}
newNode->next=head;
head=newNode;
}
void pop_back(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
   Node* temp=head;
   while(temp->next->next!=NULL){
    temp=temp->next;
   }
   temp->next=NULL;
}
void pop_front(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp=head->next;
    head->next=NULL;
    head=temp;

}
void PrintList(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    
    push_back(10);
    push_back(20);
    push_back(30);
    PrintList();
    pop_front();
    PrintList();
    pop_back();
    PrintList();
    return 0;
}
