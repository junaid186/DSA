#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertNodeStart(void){
    int num;
    cout<<"Enter number to to insert at start: ";
    cin>>num;
    node *temp = new node();
    temp->data=num;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}

void insertAtEnd(void){
    int num;
    cout<<"Enter the number to set at the endl: ";
    cin>>num;
    node *temp = new node();
    struct node *newnode;
    temp->data=num;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        newnode = head;
        while(newnode->next!=NULL){
            newnode=newnode->next;
        }
        newnode->next=temp;

    }
}

void insertAtPos(void){
    int loc,num;
    int count=0;
    cout<<"Ener the number: ";
    cin>>num;
    cout<<"Enter the location at which node will insert: ";
    cin>>loc;
    node *newnode=new node();
    struct node *temp,*pre;
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL){
        cout<<"The link list is null";
    }
    else{
            temp=head;
            for(int i=2; i<=loc;i++){
                temp=temp->next;
                if(temp->next==NULL){
                    cout<<"\ncan't insert\n";
                }
            }
            newnode->next=temp->next;
            temp->next=newnode;
    }
}

void display(void){
    cout<<"You have entered the following data: ";
    struct node *temp;
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}
int main(){
    insertNodeStart();
    insertNodeStart();
    insertNodeStart();
    insertNodeStart();
    insertNodeStart();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtPos();
    display();
}