#include <bits/stdc++.h>
using namespace std;





    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        
        stack<int>st;
        
        for(int i = 0 ; i <k; i++){
                int val = q.front();
                q.pop();
                st.push(val);
        }
        
        
        while(!st.empty()){
            int elem = st.top();
            st.pop();
            q.push(elem);
        }
        
        int t = q.size()-k;
        
        
        while(t--){
            int elem = q.front();
            q.pop();
            q.push(elem);
        }
        
        return q;
        
    }


//{ Driver Code Starts.

int main() {
    queue<int>q;
    int k = 3;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    queue<int>ans;

    ans = modifyQueue(q,k);

    cout<<"the queue after reverseing  first k elements is : ";
    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
    }

}
// } Driver Code Ends