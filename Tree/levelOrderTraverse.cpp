#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        this->left = NULL;
        this->right = NULL;
        this->data = val;    
    }

};


Node*buildTreeNode(Node*root){

     cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1 ){
        return NULL;
    }

    cout<<"Enter a data to insert into the left of "<<data<<endl;
    root->left = buildTreeNode(root->left);
    cout<<"Enter a data to insert into the right of "<<data<<endl;
    root->right = buildTreeNode(root->right);


    return root;
}


void levelOrderTraversal(Node*root){

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        Node*temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
        
    }

}



int main()
{
Node*root =NULL;
root = buildTreeNode(root);
//calling order level raversal
levelOrderTraversal(root); 

return 0;
}