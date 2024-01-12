#include<iostream>
#include<vector>
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


//Approach without consuming O(n) space
 Node*findMiddle(Node*head){
        
        Node*slow =head;
        Node*fast = head->next;
        
        while(fast!=NULL && fast->next!=NULL){
                fast=fast->next->next;
                slow=slow->next;
        }
        return slow;
        
    }
    
    Node*reverse(Node*head)
    {
        Node*curr=head;
        Node*prev = NULL;
        Node*fast = NULL;
        
        while(curr!=NULL){
            fast = curr->next;
            curr->next=prev;
            prev=curr;
            curr=fast;
        }
        return prev;
    }   

bool checkPalindrome(vector<int>&arr)
    {
        int s=0,e=arr.size()-1;
        
        while(s<=e){
            if(arr[s]!=arr[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    
    bool isPalindrome(Node *head)
    {
        
        //Approach with Storing data in vector consume o(n) Space
        // vector<int>arr;
        
        // Node*temp = head;
        // while(temp!=NULL){
        //     arr.push_back(temp->data);
        //     temp = temp->next;
        // }
        // return checkPalindrome(arr);

        //Approach without Storing data
          if(head->next == NULL){
          return true;
      }
        
        Node*mid = findMiddle(head);
        
        Node*temp = mid->next;
        mid->next=reverse(temp);
        
        
        //now take two pointer for comparison
        Node*head1= head;
        Node*head2 = mid->next;
        
        while(head2!=NULL){
            
            if(head1->data!=head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;  
        }
        
        //Now make it as original Order
          temp = mid->next;
          mid->next=reverse(temp);
        return true;

    
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

 Node* n1 = new Node(1);
    Node * head = n1;   //head pointer to original n1 node
    insertAtHead(head,2);
    insertAtHead(head,1);
    (isPalindrome(head)== true) ? cout<<"Link list is Palindrome " : cout<<"Link list is not Palindrome";

return 0;
}

