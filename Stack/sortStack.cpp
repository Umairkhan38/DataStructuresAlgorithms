#include <iostream> 
#include <stack>
using namespace std; 


void insertSorted(stack<int>& stack, int num)
{
    //base case
    if(stack.empty() || stack.top() < num){
        stack.push(num);
        return ;
    }

    //now keep track of number
    int temp = stack.top();
    stack.pop();

    //make recursive call
    insertSorted(stack, num);

    //insert element
    stack.push(temp);
}



void sortStack(stack<int> &stack)
{

    //base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    sortStack(stack);

    //insertSorted Element
    insertSorted(stack, num);

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
sortStack(st);

cout<<"Stack after Sorting of element"<<endl;

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

}