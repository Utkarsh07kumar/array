#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print (Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } 
}
Node* getmiddle(Node* &head)
{
    if(head==NULL){
        cout<<"linked list is empty"<<endl;
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head;
    // Node* fast=head->next;  //for even we can do bothdepend on question

    while(slow !=NULL && fast !=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

int getlength(Node* head){
    int len =0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

Node* reverseknode(Node* &head,int k){
    if(head==NULL)
    {
        return NULL;
    }

    int len=getlength(head);
    if(k>len)
    {
        cout<<"enter valid value"<<endl;
        return head;
    }
    Node* left=NULL;
    Node* curr=head;
    Node* right=curr->next;
    int count=0;

    while( count<k)
    {
        right=curr->next;
        curr->next=left;
        left=curr;
        curr=right;
        count++;
    }

    if(right!=NULL)
    {
        head->next=reverseknode(right,k);
    }

    return left;

}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;

    print(head);
    cout<<endl;

    // cout<<getmiddle(head)->data<<endl;
    
    head=reverseknode(head,4);
    print(head);
    return 0;
}