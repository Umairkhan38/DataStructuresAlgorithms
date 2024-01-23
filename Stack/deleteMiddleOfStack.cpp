#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int>&inputStack, int count, int size){

    //base case
    if(count == size/2){
          inputStack.pop();
          return ;  
    }

    //keep track of other useful elements
    int num = inputStack.top();
    inputStack.pop();

    //make recursive call
    solve(inputStack, count+1, size);

    //now push the tracked useful elements
    inputStack.push(num);

}



void deleteMiddle(stack<int>&inputStack, int N){
	
    int count=0;

    solve(inputStack, count , N);
   
}


int main()
{
stack<int>st;
st.push(53);
st.push(22);
st.push(56);
int size = st.size();

//delete function
deleteMiddle(st,size);

cout<<"Stack Elements after Deletion of middle elements!!"<<endl;
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();    
}

return 0;
}