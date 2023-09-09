#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next; 

    //constructor
    node(int val){
        data=val;
        next=NULL;
    }
};


void insertAtHead(node* &head, int val){
    node* n=new node(val);
    //new operator is used to allocate memory in heap
    //this line creates a linked list with one node

    n->next=head;
    head=n;

}

void insertAtTail(node* &head, int val){
    node* n=new node(val); 

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n; 
    //-> is used to assign/access a value to data type
    //this line assigns the single node linked list to the previously created linked list

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
    cout<<search(head,3)<<endl;

}