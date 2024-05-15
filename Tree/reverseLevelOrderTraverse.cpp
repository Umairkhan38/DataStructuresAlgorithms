#include<iostream>
#include<stack>
#include<queue>
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


void reverseOrderTraverse(Node*root)
{

    queue<Node*>q;
    q.push(root);
    stack<int>st;

    while(!q.empty()){
        Node*temp = q.front();
        q.pop();
        st.push(temp->data);
        
        if(temp->right){
            q.push(temp->right);
        }

        if(temp->left){
            q.push(temp->left);
        }
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    

}


int main()
{
Node*root = new Node(5);
root->left = new Node(7);
root->right = new Node(6);
reverseOrderTraverse(root);


return 0;
}