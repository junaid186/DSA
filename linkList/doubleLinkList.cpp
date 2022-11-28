#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next,*pre;
};
struct node *head;

void insertAtBeg(void){
    int num;
    cout<<"Enter the number to add in beginning: ";
    cin>>num;
    node *newNode= new node();
    newNode->data=num;
    newNode->next=newNode->pre=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        head->pre=newNode;
        head=newNode;
    }
}

void insertAtEnd(void){
    int num;
    cout<<"Enter the numbers to insert at end: "<<endl;
    cin>>num;
    node *newNode=new node();
    struct node *temp;
    newNode->next=newNode->pre=NULL;
    if(head==NULL){
        newNode->next=head;
        head=newNode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }

    }

}

void display(void){
    cout<<"\nThe numbers in linklist is: \n";
    struct node *temp;
    while (temp->next!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

int main(){
    insertAtBeg();
    insertAtBeg();
    insertAtBeg();
    insertAtBeg();
    insertAtBeg();
    display();
}