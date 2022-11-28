#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *head;

void insertBeg(){
    int num;
    cout<<"Enter number to insert "<<endl;
    cin>>num;
    node *NewNode= new node();
    NewNode->data=num;
    NewNode->next=NULL;
    if(head==NULL){
        head=NewNode;
        NewNode->next=head;
    }
    else{
        struct node *temp;
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        NewNode->next=head;
        temp->next=NewNode;
        head=NewNode;
    }
}


void insertAtEnd(void){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    node *temp=new node();
    temp->data=num;
    temp->next=NULL;
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
        temp->next=trav->next;
        trav->next=temp;
    }
}

void insertAtPos(void){
    int num,pos;
    cout<<"Enter the number to add at specific position: "<<endl;
    cin>>num;
    cout<<"Enter the position: "<<endl;
    cin>>pos;
    node *temp=new node();
    temp->data=num;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        temp->next=head;
    }
    else{
        struct node *trav;
        trav=head;
        for(int i=1; i<pos; i++){
            trav=trav->next;
        }
        temp->next=trav->next;
        trav->next=temp;
    }
}

void dltAtBeg(void){
    struct node *temp,*trav;
    temp=head;
    trav=head;
    while(trav->next!=head){
        trav=trav->next;
    }
    temp=temp->next;
    head=temp;
    trav->next=head;
    cout<<"first elment is removed...\n";
}



void display(void){
    struct node *temp;
    temp=head;
    if(head==NULL){
        cout<<"\nno data found.\n";
    }
    cout<<"You have entered the following numbers: "<<endl;
    while(temp->next!=head){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data;
    
}



int main(){
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    dltAtBeg();
    display();
}