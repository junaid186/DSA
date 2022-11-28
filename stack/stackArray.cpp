#include<iostream>
using namespace std;

int stack[10];
int top=-1;

void push(){
    int num;
    if(top==9){
        cout<<"\noverflow condition\n";
    }
    else{
        cout<<"Enter a number: ";
        cin>>num;
        top++;
        stack[top]=num;
    }
}
void pop(void){
    if(top==-1){
        cout<<"\nThe underflow condition.\n";
    }
    else{
        top--;
    }
}
void show(void){
    if(top==-1){
        cout<<"\nThere is no element in stack\n";
    }
    else{
        cout<<"\nYou have entered the following numbers"<<endl;
        for(int i=top; i>=0; i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    push();
    push();
    push();
    push();
    push();
    push();
    show();
    pop();
    show();
}