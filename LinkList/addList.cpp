#include<iostream>
using namespace std;


class Node{

    public:
    Node*next;
    int data;

    //conor
    Node(int data){
        this->data=data;
        this->next = NULL;
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

 
     Node*reverse( Node*head) {
        
        Node*curr = head;   
         Node*prev = NULL;
         Node*forward = NULL;
            
        while(curr!=NULL){
            forward = curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }    
        return prev;
    } 
    
    
    
  void insertAtTail( Node* &head,  Node* &tail, int data){
                
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
    
    
    
    Node* add( Node* first,  Node* second) {
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0) {
            
            int val1 = 0;
            if(first != NULL)
                val1 = first -> data;
                
            int val2 = 0;
            if(second !=NULL)
                val2 = second -> data;
            
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            //create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum/10;
            if(first != NULL)
                first = first -> next;
            
            if(second != NULL)
                second = second -> next;
        }
        return ansHead;
    }
    
    
    //Function to add two numbers represented by linked list.
     Node* addTwoLists( Node* first,  Node* second)
    {
        // code here             
        first = reverse(first);
        second = reverse(second);
        
        Node*ans = add(first,second);
        
        ans = reverse(ans);
        return ans;
    }




void printList(Node* &head){
    Node*temp = head;

    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}


int main()
{
    
    //create a node
    Node* first = NULL;
    Node* second = NULL;
   
    insertAtHead(first,5);
    insertAtHead(first,0);
    insertAtHead(second,2);
    insertAtHead(second,5);

    Node*ans = addTwoLists(first,second);
    ans = reverse(ans);
    cout<<"The Addition of list is "<<endl;
    printList(ans);

  

    return 0;

}
