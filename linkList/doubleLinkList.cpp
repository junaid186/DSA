#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next,*pre;
};
struct node *head,*lastNode;

void insertAtBeg(void){
    int num;
    cout<<"Enter the number to add in beginning: ";
    cin>>num;
    node *temp= new node();
    temp->data=num;
    temp->next=temp->pre=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head->pre=temp;
        head=temp;
    }
}

void insertAtEnd(void){
    int num;
    cout<<"Enter the numbers to insert at end: "<<endl;
    cin>>num;
    node *temp=new node();
    temp->data=num;
    temp->next=NULL;
    temp->pre=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        struct node *trav;
        trav=head;
        while(trav->next!=NULL){
            trav=trav->next;
        }
        lastNode=trav;
        trav->next=temp;
        temp->pre=trav;
    }

}

void display(void){
    cout<<"\nThe numbers in linklist is: \n";
    struct node *temp;
    temp=head;
    while (temp->next!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

int main(){
    // insertAtEnd();
    // insertAtEnd();
    // insertAtEnd();
    // insertAtEnd();
    // insertAtEnd();
    insertAtBeg();
    insertAtBeg();
    insertAtBeg();
    insertAtBeg();
    insertAtBeg();
    insertAtEnd();
    display();
}
