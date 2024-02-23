#include <bits/stdc++.h> 
using namespace std;


class Queue {

    int size;
    int *arr;
    int qfront;
    int rear;

public:
    Queue() {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        qfront  = 0;
        rear = 0;


    }


    bool isEmpty() {
        // Implement the isEmpty() function
            return qfront == rear;
    }


    void enqueue(int data) {
        // push operation
        if(rear== size){
            cout<<"The queue is full";
        }else{
            arr[rear] = data;
            rear++;
        }

    }

    int dequeue() {
        // pop operation
        if(qfront == rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
             return ans;
        }
       
    }

    int front() {
        // Implement the front() function
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};


int main(){

Queue q1;

q1.enqueue(5);
q1.enqueue(102);
q1.enqueue(65);
q1.enqueue(869);

//pop
cout<<"popped element is "<<q1.dequeue()<<endl;

cout<<"Front element is "<<q1.front()<<endl;

q1.isEmpty()==true ? cout<<"Queue is Empty " : cout<<"Queue is not empty"<<endl;

}