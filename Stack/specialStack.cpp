#include<iostream>
#include<stack>
using namespace std;


class SpecialStack {
    public:

    int data;
    stack<int>s;
    int mini;

    void push(int data) {

        if(s.empty()){
            s.push(data);
            mini = s.top();
        }
        else{

            if(data<mini){
               s.push(2*data-mini);
               mini =data;     
            }
            else{
                s.push(data);

            }
        }
    }

    void pop() {

    if(s.empty()){
        return;
    } 
    
    int curr = s.top();
    s.pop();

    if(curr<mini){
        int prevMin = mini;
        int val= 2*mini - curr;
        mini = val;
        return ;
    }else{
        return ;
    }

    }

    int top() {

          if(s.empty()){
              return -1;
          }  
        int curr = s.top();

        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }      
    }


    int getMin() {
        if(s.empty()){
            return -1;
        }
        else{
            return mini; 
        }
        
    }

    void printStack(stack<int>s){

        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }


};



int main()
{
SpecialStack s;
s.push(50);
s.push(65);
s.push(320);
s.push(2);
s.push(30);

cout<<"The min Element is "<<s.getMin()<<endl;
cout<<"top element is "<<s.top()<<endl;




return 0;
}