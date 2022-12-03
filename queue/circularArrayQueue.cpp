#include<iostream>
using namespace std;
#define maxSize 10
int front=-1;
int rear=-1;
int queue[maxSize];

void enqueue(void){
    int num;
    cout<<"Enter the number to enqueu: "<<endl;
    cin>>num;
    if((rear+1)%maxSize==front){
        cout<<"\nqueue is full already\n";
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=num;
    }
    else{
        rear=(rear+1)%maxSize;
        queue[rear]=num;
    }
}

void dequeue(void){
    int item;
    if(front==-1 && rear==-1){
        cout<<"underflow condition\n";
    }
    else{
        item=queue[front];
        front=(front+1)%maxSize;
    }
}


void display(void){
    int i= front;
    cout<<"The value of front is: "<<front<<endl;
    cout<<"The value of rear is: "<<rear<<endl;
    if(front==-1 && rear==-1){
        cout<<"Queue is empty.\n";
    }
    else{
        cout<<"You have entered the following elements.\n";
        // for(i=front; i<=rear; i++){
        //     cout<<queue[i]<<endl;
        // }
        // cout<<queue[i]<<endl;
        while(i!=rear)  
        {  
            cout<<queue[i]<<endl;
            i=(i+1)%maxSize;  
        }  
        cout<<queue[i]<<endl;
    }
}

int main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    enqueue();
    display();
    enqueue();
    display();
}