#include<iostream>
using namespace std;

class kQueue{
public:
   int n, k;
   int *front;
   int*rear;
   int*next;
   int *arr;
   int freespot;

   kQueue(int n, int k){
    this->k = k;
    this->n = n;
    front = new int[k];
    rear = new int[k];
    for(int i=0; i<k; i++){
        front[i] = -1;
        rear[i] = -1;
    }

    next = new int[n];
    for(int i=0;i<n;i++){
        next[i] = i+1;
    }

    next[n-1] = -1;
    arr = new int[n];
    freespot = 0;
   } 


    //for push operation 
    void enqueue(int data, int qn){

        //check overflow condition
        if(freespot == -1){
            cout<<"stack overflow"<<endl;
            return;
        }        

        //find first free index
        int index = freespot;

        //update freespot
        freespot = next[index];

        //check for the first element
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else{

            next[rear[qn-1]] = index;
        }

        //update next becuse on that index we are inserting element 
        next[index] = -1;

        //update rear 
        rear[qn-1] = index;

        //push data
        arr[index] = data; 

    } 



    //for pop operation
    int dequeue(int qn){

        //check underflow condition
        if(front[qn-1] == -1){
            cout<<"Queue Underflow "<<endl;
            return -1;
        }

        //find index to pop
        int index = front[qn-1];

        //update front
        front[qn-1] = next[index];

        //manage freespot
        next[index] = freespot;
        freespot = index;
        return arr[index];

    }

};


int main()
{

    kQueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);


    cout<<"popped element is "<<q.dequeue(1)<<endl;

return 0;
}