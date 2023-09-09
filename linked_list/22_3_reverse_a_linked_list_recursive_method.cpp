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

node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

// 1 2 3 4 NULL
// returns 4 3 2 1 NULL
//     2 3 4 NULL
//     returns 4 3 2 NULL
//         3 4 NULL
//         returns 4 3 NULL
//             4 NULL
//             returns 4 NULL


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    
    node* newhead=reverseRecursive(head);
    display(newhead);
    //display(reverseRecursive(head));
}