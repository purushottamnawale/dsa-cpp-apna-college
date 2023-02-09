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


void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void makeCycle(node* &head, int pos){
    node* temp=head;
    node* startNode;

    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}


//Floyd's Algorithm or Hare and Tortoise Algorithm
bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}


//Floyd's Algorithm or Hare and Tortoise Algorithm
void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);

    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

int main(){
    node *head,*tail=NULL;
    

    cout<<"Enter first element: "<<endl;
    int firstdata;
    cin>>firstdata;
    head=new node(firstdata);
    tail=head;

    cout<<"Enter remaining number of elements: "<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        tail->next=new node(k);
        tail=tail->next;
    }

    display(head);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
}