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
};


void insertAtHead(Node* &head, int d){
    //create New Node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


//Approach with the replacement of the data

void SortwithReplacement(Node* &head){

    int noZeros = 0;
    int noOnes = 0;
    int noTwo = 0;

    Node*temp = head;
    
    while(temp!=NULL)
    {
            if (temp->data == 0)
            {
                noZeros++;
            }

            if (temp->data == 1)
            {
                noOnes++;
            }

            if (temp->data == 2)
            {
                noTwo++;
            }
                temp=temp->next;                    
    }


    temp = head;

    while(temp!=NULL){

        if(noZeros!=0){ 
            temp->data=0;
            noZeros--;
        }

       else if(noOnes!=0){ 
            temp->data = 1;
            noOnes--;
        }

        else if(noTwo!=0){ 
            temp->data = 2;
            noTwo--;
        }

            temp = temp->next;
    }
}


// Approach Sort Without Replacement of Nodes by Mrging


//insertion function for dummy Nodes 
 void insertTail(Node*&tail, Node*curr){
        tail->next = curr;
        tail = curr;
 }



Node*SortWithoutReplacement(Node* &head){

    Node*zeroHead = new Node(-1);
    Node*zerotail = zeroHead;
    Node*oneHead = new Node(-1);
    Node*onetail = oneHead;
    Node*twoHead = new Node(-1);
    Node*twotail = twoHead;
    
   
    Node*temp = head;

    while(temp!=NULL){

        if(temp->data == 0){
            insertTail(zerotail,temp);

        }
        else if(temp->data == 1){
            insertTail(onetail, temp);
        }
        else if(temp -> data == 2){
            insertTail(twotail, temp);
        }

        temp = temp->next;
    }


    //Merge the list 

    //first check that list with oneHead contains the ones
    if(oneHead->next != NULL){
        zerotail->next = oneHead->next;
    } 
    else{
        //there is no one present
        zerotail ->next = twoHead->next;
    }

    onetail->next = twoHead->next;
    twotail->next = NULL;

    head = zeroHead->next;

    //Now Delete All Dummy Heads
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;

}



void printList(Node* head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



int main()
{

 Node* n1 = new Node(0);
    Node * head = n1;   //head pointer to original n1 node
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,1);
    cout<<"Link List Before Sorting "<<endl;
    printList(head);
    cout<<"Link List After Sorting "<<endl;
    // SortwithReplacement(head);
    SortWithoutReplacement(head);
    printList(head);


return 0;
}

