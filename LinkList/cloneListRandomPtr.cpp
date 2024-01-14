#include<iostream>
#include<unordered_map>
using namespace std;


class Node{

    public:
    Node*next;
    Node*arb;
    int data;

    //conor
    Node(int data){
        this->data=data;
        this->next = NULL;
        this->arb = NULL;
    }

    //desctructor to delete the node
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

    
  void insertTail( Node* &head,  Node* &tail, int data){
                
        Node* temp = new Node(data);
           
        //if list is empty    
        if(head==NULL){
                head = temp;
                tail = temp;
                return;
            }
            else{
                
                tail->next = temp;
                tail = temp;
            }
    }

    

//approach with map 
    Node *copyList(Node *head)
    {

        Node*cloneHead = NULL;
        Node*cloneTail = NULL;
        
        Node*temp = head;
        
        while(temp!=NULL){
            insertTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        unordered_map<Node*,Node*>oldToNew;
        temp = head;
        Node*temp2 = cloneHead;
        
        while(temp!=NULL && temp2!=NULL){
            oldToNew[temp] = temp2;
            temp = temp->next;
            temp2 = temp2->next;
        }
        
        temp = head;
        temp2 = cloneHead;
        
        while(temp!=NULL){
            
            temp2->arb = oldToNew[temp->arb];
            temp = temp->next;
            temp2 = temp2->next;
        }
        
        return cloneHead;
        
}
    
    
//approach Without map
 Node *copyList(Node *head)
    {
        //Write your code here
        Node*cloneHead = NULL;
        Node*cloneTail = NULL;
        
        Node*temp = head;
        
        while(temp!=NULL){
            insertTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        Node*originalNode = head;
        Node*cloneNode = cloneHead;
        
        while(originalNode!=NULL && cloneNode!=NULL){
                
                Node*next = originalNode->next;
                originalNode->next = cloneNode;
                originalNode = next;
                
                next = cloneNode->next;
                cloneNode->next = originalNode;
                cloneNode = next;
        }
        
        
        //random pointer
        temp = head;
        
        while(temp!=NULL){
            if(temp->next != NULL){
            temp->next->arb = temp->arb ? temp-> arb->next : temp->arb;
            }
            temp = temp->next->next;
        }
            
            Node*ogNode = head;
            cloneNode = cloneHead;
            
        
           while(ogNode!=NULL && cloneNode!=NULL){
                ogNode->next = cloneNode->next;
                ogNode = ogNode->next;
                
                if(ogNode!=NULL){
                cloneNode->next = ogNode->next ;
                }
                cloneNode = cloneNode->next;
              
        }
        return cloneHead;
      
        
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
    
    //create a node
   Node*head = NULL;
   insertAtHead(head,5);
   insertAtHead(head,6);
   insertAtHead(head,8);
   printList(head);


    return 0;

}
