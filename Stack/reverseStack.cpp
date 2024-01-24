#include<iostream>
#include<stack>
using namespace std;



void insertAtBottom(stack<int>& myStack, int x){

    //base case
    if(myStack.empty()){
        myStack.push(x);
        return; 
    }


    int num = myStack.top();
    myStack.pop();

    insertAtBottom(myStack,x);

    myStack.push(num);
}



void reverseStack(stack<int> &stack) {

    //base case
     if(stack.empty()){
         return;
     }   

     int num = stack.top();
     stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);

}


int main()
{
stack<int>st;
st.push(53);
st.push(22);
st.push(56);

reverseStack(st);

cout<<"The stack after Reverse : "<<endl;

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

return 0;
}


