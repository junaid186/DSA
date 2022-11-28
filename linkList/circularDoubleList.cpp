#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
    struct node *pre;
};
struct node *head,*lastNode;
void insertAtBeg(void){
    int num;
    cout<<"Enter the number to insert at beginning: ";
    cin>>num;
    node *temp = new node();
    temp->data=num;
    temp->next=NULL;
    temp->pre= NULL;
    if(head==NULL){
        head=temp;
        temp->next=head;
    }
    else{
        struct node *trav;
        trav = head;
        while(trav->next!=head){
            trav=trav->next;
        }
        temp->next=head;
        head->pre=temp;
        head=temp;
        trav->next=head;
    }
}

void insertAtEnd(void){
    int num;
    cout<<"Enter the number to insert at end: "<<endl;
    cin>>num;
    node *temp=new node();
    temp->data=num;
    temp->next=temp->pre=NULL;
    if(head==NULL){
        head=temp;
        temp->next=head;
    }
    else{
        struct node *trav;
        trav=head;
        while(trav->next!=head){
            trav=trav->next;
        }
        trav->next = temp;  
        temp ->pre=trav;  
        // head -> pre = temp;  
      temp -> next = head; 
    }
}



void display(void){
    struct node *temp;
    temp=head;
    cout<<"\nYou have entred the follwoing data: "<<endl;
    while(temp->next!=head){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main(){
    // insertAtBeg();
    // insertAtBeg();
    // insertAtBeg();
    // insertAtBeg();
    // insertAtBeg();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();    
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    display();
}