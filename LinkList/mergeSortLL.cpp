#include<iostream>
using namespace std;


class Node{

    public:
    Node*next;
    int data;

    //constructor
    Node(int data){
        this->data=data;
        this->next = NULL;
    }

    //desctructor to delete the Node
    ~Node(){
        int value = this->data;
        //free memory
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory is free for data "<<value<<endl;

    }
};


void insertAtHead(Node* &head, int d){
    //create New Node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


Node*findMid(Node*head){

    Node*slow = head;
    Node*fast = slow->next;

    while(fast!=NULL && fast->next!=NULL){

        fast = fast->next->next;
        slow= slow->next;
    } 
    return slow;    
}


Node* merge(Node* &left, Node*&right)
{

    if(left == NULL){
        return right;
    }

    if(right == NULL)
        return left;

    Node*ans = new Node(-1);
    Node*temp = ans;

    while(left!=NULL && right!=NULL){

            if(left->data < right->data){
                temp->next = left;
                temp = left;
                left = left->next;
            } else {
                temp->next = right;
                temp = right;
                right = right->next;
            }
    }
            while(left!=NULL){
                temp->next = left;
                temp = left;
                left = left->next;

            }

            while(right!=NULL){
                temp->next = right;
                temp = right;
                right = right->next;

            }
            ans=ans->next;
            return ans;
    

}



Node*mergeSort(Node*head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    Node*mid = findMid(head);

    Node*left = head;
    Node*right=mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    Node*result = merge(left,right);
    return result;

}



void printList(Node* &head){
    Node*temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main()
{
    
    //create a Node
    Node* head = NULL;
    insertAtHead(head,66);
    insertAtHead(head,50);
    insertAtHead(head,123);
    insertAtHead(head,20);
    insertAtHead(head,96);
    head = mergeSort(head);
    cout<<"Sorted List is "<<endl;
    printList(head);

    return 0;

}
