#include<iostream>
using namespace std;

#define maxSize 7
int front=-1;
int rear=-1;
int queue[maxSize];

void enqueue(void){
    int num;
    cout<<"Enter the number to insert in queue: ";
    cin>>num;
    if(rear==maxSize-1){
        cout<<"\noverflow condition.\n";
    }
    else if(rear==-1 && front==-1){
        front=0;
        rear=0;
        // queue[rear]==num;
    }
    else{
        rear++;
    }
    queue[rear]=num;
    
}

void dequeue(void){
    int item;
    if(front==-1 || front>rear){
        cout<<"\nunderflow condition."<<endl;
    }
    else if(front==rear){
        item=queue[front];
        front++;
        cout<<item<<" is removed from list"<<endl;
        front=rear=-1;
    }
    else{
        item=queue[front];
        front++;
        cout<<item<<" is removed from queue."<<endl;
    }
}

void display(){
    if(front==-1 && rear==-1){
        cout<<"There is no element is queue."<<endl;
    }
    else{
        cout<<"\nfollowing elements are in queue.\n";
        for(int i=front; i<=rear;i++){
             cout<<queue[i]<<endl;
        }
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
    display();

}