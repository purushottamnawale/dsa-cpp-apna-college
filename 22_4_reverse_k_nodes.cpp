#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next; 

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;

}

void insertAtTail(node* &head, int val){
    node* n=new node(val); //new operator is used to allocate memory in heap

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n; //-> is used to assign/access a value to data type

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


node* reversek(node* &head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}

// 1 2 3 4 5 6 NULL
//     2 1 NULL
//     2 1 joins 3 4 5 6 NULL
//         4 3 NULL
//         4 3 joins 5 6 NULL
//             6 5 NULL

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);

    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
    

}