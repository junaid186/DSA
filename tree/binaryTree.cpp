#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * insert(){
    int num;
    node *temp=new node();
    cout<<"Enter the number to add in tree(-1 for no data): ";
    cin>>num;
    if(num==-1){
        return 0;
    }
    else{
        temp->data=num;
        cout<<"Enter the left element of "<<num<<endl;
        temp->left=insert();
        cout<<"Enter the right element of "<<num<<endl;
        temp->right=insert();
    }
}

void preOrder(struct node *root){
    if(root==0){
        return;
    }
    cout<<root->data<<endl;
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct node *root){
    if(root==0){
        return;
    }
    else{
        inOrder(root->left);
        cout<<root->data<<endl;
        inOrder(root->right);
    }
}

void postOrder(struct node *root){
    if(root==0){
        return;
    }
    else{
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<endl;
    }
}


int main(){
    struct node *root;
    root=insert();
    cout<<"Pre order element of tree is: "<<endl;
    preOrder(root);
    cout<<"In order element of tree is: "<<endl;
    inOrder(root);
    cout<<"Post order element of tree is: "<<endl;
    postOrder(root);
}