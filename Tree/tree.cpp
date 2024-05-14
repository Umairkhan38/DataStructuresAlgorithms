#include<iostream>
using namespace std;


class Node{

    public:
    int data;
    Node*left = NULL;
    Node*right = NULL;

    //Constructor
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};



Node*buildTreeNode(Node*root){

    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }   

    cout<<"Enter the data to be inserted in left of "<<data<<endl;
    root->left = buildTreeNode(root->left);
    cout<<"Enter the data to be inserted in right of "<<data<<endl;
    root->right = buildTreeNode(root->right);

    return root;

}



int main()
{

Node*root = NULL;
//root builder functoin
root = buildTreeNode(root);



return 0;
}
 