#include<iostream>
#include<stack>
#include<queue>
using namespace std;


//using stack 
void firstInterLeave(queue<int>&q, int n){

    int lim = n/2;
    stack<int>st;
    
    while(lim){
        int elem = q.front();
        st.push(elem);
        q.pop();
        lim--;
    }



    while(!st.empty()){
        int elem = st.top();
        st.pop();
        q.push(elem);
    }

    lim = n/2;

    while(lim){
        int elem = q.front();
        q.pop();
        q.push(elem);
        lim--;        
    }

    lim = n/2;

    while(lim){
        int elem = q.front();
        q.pop();
        st.push(elem);
        lim--;        
    }

    // cout<<"lim is after second push stack "<<lim<<endl;
    
    while(!st.empty()){
        int stElem = st.top();
        st.pop();
        q.push(stElem);
        int qElem = q.front();
        q.pop();
        q.push(qElem);
    }


}




int main()
{
queue<int>q;
q.push(11);
q.push(12);
q.push(13);
q.push(14);
q.push(15);
q.push(16);

int n = q.size();
firstInterLeave(q,n);

cout<<"The Queue After First InterLeave is "<<endl;

while(!q.empty()){
    int elem = q.front();
    cout<<elem<<" ";
    q.pop();
}

return 0;
}

