#include<iostream>
#include <utility>
using namespace std;

class Node{

    public:
    int data;
    Node*next;

    Node(int data){
        this-> data = data;
        this-> next= NULL;
    }
};



Node* insertNode(Node* &tail, int data){

     //in case emppty list
    if(tail == NULL){
        
        Node* newNode = new Node(data);
        tail=newNode;
        newNode->next = newNode; 
    
    }
    else{

        //in case the list consist some Nodes
        Node*curr = tail;

        Node*newNode = new Node(data);
        newNode->next=tail->next;
        curr->next = newNode;
        tail = newNode;
    }

}


int getLength(Node*tail){

    if(tail==NULL){
        return 0;
    }

    int size=0;
    Node*temp = tail->next;
    
    do{
        size++;
        temp = temp->next;
    } 
    while(temp!=tail->next);
    
    return size;
}


pair<Node*, Node*> splitMiddle(Node* &tail) {

    int len = getLength(tail);
    int intersection = len / 2;
    Node* tail1 = tail;
    Node* tail2 = tail;
    int cnt = 0;
    while (cnt < intersection) {
        tail2 = tail2 -> next;
        cnt++;
    }
    cnt = 0;
    Node* temp = tail;

    if (len & 1) {

        tail2 = tail2 -> next;
        while (cnt < intersection) {
            temp = temp -> next;
            cnt++;
        }
        temp -> next = tail1;

        temp = tail2;
        cnt=0;

        while (cnt < intersection-1) {
            temp = temp -> next;
            cnt++;
        }
        temp -> next = tail2;


    }
    else {

            while (cnt < intersection-1) {
                temp = temp-> next;
                cnt++;
            }
            temp -> next = tail1;

            temp = tail2;
            cnt=0;

            while (cnt < intersection-1) {
                temp = temp -> next;
                cnt++;
            }
            temp -> next = tail2;

    }

    return make_pair(tail1, tail2);
}




void printlist(Node* tail){

//     Node*temp = tail->next;

//     if(tail == NULL){
//         cout<<"Sorry List is Empty !!";
//         return;
//     }

//    do{
//     cout<<temp->data<<" ";
//     temp = temp->next;
//    }
//     while(temp!= tail->next);
    
//     cout<<endl;

 Node*temp = tail;

    if(tail == NULL){
        cout<<"Sorry List is Empty !!";
        return;
    }

   do{
    cout<<tail->data<<" ";
    tail = tail->next;
    }while(tail!= temp);

    cout<<endl;
}



int main()
{
  Node*tail = NULL;
    insertNode(tail,2);
    insertNode(tail,11);
    insertNode(tail,1020);
    insertNode(tail,55);
    // insertNode(tail,920);
    pair<Node*,Node*>ans = splitMiddle(tail);
    cout<<"the first List is "<<endl;  
    printlist(ans.first); 
    cout<<"the second List is "<<endl;
    printlist(ans.second);  


return 0;
}

