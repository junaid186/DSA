#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

struct node *rear,*front;

void enqueue(void){
    int num;
    cout<<"Enter the number to insert to enqueue: ";
    cin>>num;
    node *temp=new node();
    temp->data=num;
    temp->next=NULL;
    if(front == NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}

void dequeue(void){
    int items;
    if(front==NULL){
        cout<<"queue is empty.\n";
    }
    else{
        items=front->data;
        front=front->next;
        cout<<items<<" is dequeue.\n";
    }
}

void display(void){
    struct node *temp;
    temp=front;
    if(front==NULL){
        cout<<"Queue is empty.\n";
    }
    else{
        cout<<"Data in the queue is: \n";
        while(temp->next!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
}

int main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    dequeue();
    display();
}