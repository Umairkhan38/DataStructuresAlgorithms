#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int>& myStack, int x){

    //base case
    if(myStack.empty()){
        myStack.push(x);
        return; 
    }


    int num = myStack.top();
    myStack.pop();

    solve(myStack,x);

    myStack.push(num);
}


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.

    solve(myStack, x);
    return myStack;
}


int main()
{
stack<int>st;
//eleemnt to be inserted
int x=5;

//pushing data
st.push(365);
st.push(2);
st.push(96);

// functioon call
pushAtBottom(st,x);

cout<<"Stack after Insertion of element at bottom"<<endl;

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

return 0;
}