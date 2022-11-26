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
    insertBeg();
    insertBeg();
    insertBeg();
    insertBeg();
    insertBeg();
    display();
}