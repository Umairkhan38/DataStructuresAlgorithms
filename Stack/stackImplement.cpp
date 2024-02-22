#include<iostream>
using namespace std;


class Stack{

    public:

    int *arr;
    int size;
    int top;


    // constructor
    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size]; 
    } 


    void push(int element){

        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow!!"<<endl;
        }
    }


    void pop(){

        if(top>=0){
            top--;
        }else{
            cout<<"Stack Underflow!!"<<endl;
        }

    }


    int peek(){ 
    if(top>=0){
        return arr[top];
    }else{
          cout<<"Stack is Empty!!"<<endl;
    }    
  }


    bool isempty(){
        if(size == 0 || top<0){
            return true;
        }else{
            return false;
        }
    }

};



int main()
{

    Stack s(5);
    s.push(10);
    s.push(85);
    s.push(15);
    cout<<"top element is "<<s.peek()<<endl;
    s.pop();
    cout<<"top element after pop is "<<s.peek()<<endl;
    s.isempty() == true ? cout<<"Stack is Empty " : cout<<"Stack is not empty!"<<endl;

    return 0;
}

