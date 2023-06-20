#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

int findLength(Node* &head ) 
{
    int len = 0;
    Node* temp = head;
    while(temp != NULL) 
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void print (Node* &head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        if(temp->next==NULL)
        {
            cout<<temp->data<<"-> X";
            temp=temp->next;
        }
        else
        {
        cout<<temp->data<<"->";
        temp=temp->next;  
        }  
    } 
}

void insertAtHead(Node* &head, Node* &tail, int data) 
{  
    if(head == NULL) 
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else 
    {
        Node* newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head,Node* &tail, int data) 
{
    if(head == NULL) 
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) 
{
    if(head == NULL) 
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if(position == 0) 
    {
        insertAtHead(head, tail , data);
        return;
    }
    int len = findLength(head);
    if(position >= len) 
    {
        insertAtTail(head, tail, data);
        return;
    }
    //ste1:find prev and curr
    int i = 1;
    Node* prev = head;
    while(i < position) 
    {
        prev= prev -> next;
        i++;
    }
    Node* curr = prev -> next;
    //step2;
    Node* newNode = new Node(data);
    //step3:
    newNode -> next = curr;
    //step4:
    prev -> next = newNode;
}
Node* reverse(Node* head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}
bool checkpalindrome(Node* &head)
{
    if(head==NULL)
    {
        cout<<"empty"<<endl;
        return true;
    }
    if(head->next==NULL) return true;   
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        // slow is at middle
        Node* revrsellkahead=reverse(slow->next);

        slow->next=revrsellkahead; 

        Node* temp1=head;
        Node* temp2=revrsellkahead;
        while(temp2 != NULL)
        {
            if(temp1->data != temp2->data)
            {
                return false;
            }
            else
            {
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return true;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail,10);
    insertAtHead(head, tail,20);
    insertAtHead(head, tail,30);
    insertAtHead(head,tail, 330);
    insertAtHead(head, tail,10);
    print(head);
    bool ispalindrome=checkpalindrome(head);
    if(ispalindrome) 
    {
        cout<<endl<<"yes"<<endl;
    }
    else 
    {
        cout<<endl<<"no"<<endl;
    }
    return 0;
    
}