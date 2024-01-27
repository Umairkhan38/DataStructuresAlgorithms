#include<iostream>
#include<vector>
#include<stack>
using namespace std;


    // #here the celebrity is the person who doesn't know anyone but all know him:


 bool knows(vector<vector<int>>&M, int a, int b, int n){
        
        if(M[a][b] == 1){
            return true;
        }else{
            return false;
        }
        
    }
    
        //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        
        for(int i=0; i<n; i++){
                st.push(i);
        }
        
        
        while(st.size() > 1){
            int a = st.top();
            st.pop();
            int b= st.top();
            st.pop();
            
            if(knows(M,a,b,n)){
                st.push(b);
            }else{
                st.push(a);
            }
        }
        
        
        int candidate = st.top();
        
        bool rowCheck = false;
        int zeroCnt = 0;
        
        for(int i=0; i<n; i++){
            if(M[candidate][i] == 0){
                zeroCnt++;
            }
        }
        
        if(zeroCnt != n){
            return  -1;
        }
        
        
        bool colCheck = false;
        int oneCnt = 0;
        
        for(int i=0; i<n; i++){
            if(M[i][candidate] ==1){
                    oneCnt++;
            }
        }
        
        //check other elements know him except itself
        if(oneCnt != n-1){
            return -1; 
        }
        
        return candidate;
        
    }


int main()
{
    vector<vector<int>> M =  
        {{0, 1 ,0},
         {0, 0,  0}, 
         {0, 1,  0}};
      int n = M[0].size();   

    int ans = celebrity(M,n);
    cout<<"The Celebrity Person is Index : "<<ans<<endl;     
    return 0;
}