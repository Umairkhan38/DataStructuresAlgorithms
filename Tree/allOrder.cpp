#include<iostream>
using namespace std;

class Node{

    public:
    Node*right=NULL;
    Node*left=NULL;
    int data;

    Node(int d){
    this->right = NULL;
    this->left = NULL;
    this->data = d;
    }
};

void inOrder(Node*root){

    //base case
    if(root == NULL){
        return ;
    }

    //inorder traversal (left, mid, right)
    //left call
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
        cout<<endl;
}


void preOrder(Node*root){

    //base case
    if(root == NULL){
        return ;
    }

    //preorder traversal (mid, left, right)
    //left call
    cout<<root->data<<" ";
    inOrder(root->left);
    inOrder(root->right);
        cout<<endl;
}

void postOrder(Node*root){

    //base case
    if(root == NULL){
        return ;
    }

    //postorder traversal (left, right, mid)
    //left call
    inOrder(root->left);
    inOrder(root->right);
    cout<<root->data<<" ";
        // cout<<endl;
}


int main()
{
Node*root = new Node(5);
root->left = new Node(7);
root->right = new Node(6);
cout<<"In Order Traversal is "<<endl;
inOrder(root);
cout<<"Pre Order Traversal is "<<endl;
preOrder(root);

cout<<"Post Order Traversal is "<<endl;
postOrder(root);


return 0;
}