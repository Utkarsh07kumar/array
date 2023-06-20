#include<iostream>
using namespace std;
// node initialisation

class Node{
    public:
    int data;
    Node* next;

    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        this->data;
    }
}; 
int findlen(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertathead(Node* &head,Node* &tail, int data) 
{
    if(head == NULL) 
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newnode= new Node(data);
        newnode->next=head;
        head=newnode;
    }
}
void insertattail( Node* &head,Node* &tail, int data)
{
    if(head == NULL) 
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newnode=new Node(data);
    tail->next=newnode;
    tail=newnode;
}
void insertatposition(int data,int position ,Node* &head,Node* & tail){
    if(head== NULL)
    {
        Node* newnode= new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    if(position==0){
        insertathead(head,tail,data);
        return;
    }
    int length=findlen(head);
    if(position>=length){
        insertattail(head,tail,data);
        return;
    }
    // find prev ans curr
    int i=1;
    Node * prev=head;
    while (i<position)
    {
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;

    Node* newnode=new Node(data);
    newnode->next=curr;
    prev->next=newnode;
    
}
void print(Node* &head)
{
    Node*temp=head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }   
}
void deletenode(int position,Node* &head,Node* & tail){
    if(head==NULL){
        cout<<"cant delete empty";
        return;
    }
    if(position==1){
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len=findlen(head);
    if(position==len)
    {
        int i=1;
        Node* prev=head;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        prev->next=NULL;
        Node* temp=tail;
        tail=prev;
        delete temp;
        return;
    }
    int i=1;
    Node*prev=head;
    while (i<position-1)
    {
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;

    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
int main()
{
    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(40);
    // Node* fifth=new Node(50);
    
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    
    // insertathead(first,20);
    // print(first); 
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(head,tail,20);
    insertathead(head,tail,30);
    insertattail(head,tail,77);
     insertathead(head,tail,50);
    insertathead(head,tail,350);
    insertattail(head,tail,78);
    print(head);
    // insertatposition(101,6,head,tail);
    cout<<endl;
    deletenode(3,head,tail);
    print(head);
    return 0;
}