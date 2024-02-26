#include<iostream>
#include<queue>
#include<stack>
using namespace std;


  queue<int> rev(queue<int> q)
    {
        stack<int>st;
        
        while(!q.empty()){    
            int elem = q.front();
            q.pop();    
            st.push(elem);
        }
        
        while(!st.empty()){
            int elem = st.top();
            st.pop();
            q.push(elem);
        }
        
        return q;
  }




int main()
{
   queue<int>q;
   q.push(50); 
   q.push(80); 
   q.push(5);
 
   queue<int>ans = rev(q); 

   cout<<"The reverse queue is : ";

    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
    }

}
