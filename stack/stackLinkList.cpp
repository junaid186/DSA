#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *head,*lastNode;

void push(void){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    node *temp=new node();
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
void pop() {
   if(head==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< head->data <<endl;
      head = head->next;
   }
}
void display(void){
    struct node *temp;
    temp=head;
    if(head==NULL){
        cout<<"\noverflow condition\n";
    }
    else{
        cout<<"\nyou have entered the following numbers: \n";
        while(temp->next!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<temp->data;
    }
}

int main(){
    push();
    push();
    push();
    push();
    push();
    display();
    pop();
    display();
}