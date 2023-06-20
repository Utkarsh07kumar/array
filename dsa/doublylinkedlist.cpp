#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }
    ~Node(){
        this->data;
    }
};

int getlen(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertathead(Node* &head,Node* &tail,int data){
    if(head==NULL)
    {
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    Node* newnode=new Node(data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insertattail(Node* &head,Node* &tail,int data){
    if(head==NULL)
    {
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    Node* newnode=new Node(data);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void insertatposition(Node* &head,Node* &tail,int data,int position){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;  
    }
    if(position==1){
        insertathead(head,tail,data);
        return ;
    }
    int len=getlen(head);
    if(position>=len){
        insertattail(head,tail,data);
        return ;
    }

    int i=1;
    Node* prevnode=head;
    while(i<position-1){
        prevnode=prevnode->next;
        i++;
    }
    Node* curr=prevnode->next;
    Node* newnode =new Node(data);

    prevnode->next=newnode;
    newnode->prev=prevnode;

    curr->prev=newnode;
    newnode->next=curr;
}

void deletefrompos(Node* &head,Node* &tail,int position){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len=getlen(head);
    if(position>len)
    {
        cout<<"enter valid position";
    }
    if(position==len)
    {
        Node* temp= tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }
    int i=1;
    Node* left=head;
    while(i<position-1){
        left=left->next;
        i++;
    }
    Node* curr=left->next;
    Node* right=curr->next;

    left->next=right;
    right->prev=left;
    curr->prev=NULL;
    curr->next=NULL;
    delete curr;

}

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* head=first;
    Node* tail=fifth;
    
    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    third->next=fourth;
    fourth->prev=third;

    fourth->next=fifth;
    fifth->prev=fourth;


    print(first);

    insertatposition(head,tail,23,2);
    cout<<endl;
    print(head);
    cout<<endl;
    deletefrompos(head,tail,6); 
    print(head);
    return 0;
}