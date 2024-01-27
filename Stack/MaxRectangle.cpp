#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


    vector<int>smallerNext(int *arr, int n){

     stack<int>st;
    vector<int>ans(n);
    st.push(-1);

    for(int i=n-1; i>=0; i--){

        int curr = arr[i];

        while(st.top()!= -1 && arr[st.top()] >= curr){
            st.pop();
        }

        ans[i] = st.top();

         st.push(i);   
    }

    return ans;

}



    vector<int>smallerPrev(int *arr, int n){
    
         stack<int>st;
        vector<int>ans(n);
        st.push(-1);
    
        for(int i=0; i<n; i++){
            int curr = arr[i];
            while(st.top()!= -1 && arr[st.top()] >= curr){
                st.pop();
            }
    
            ans[i] = st.top();
    
             st.push(i);   
        }
    
        return ans;
    
    }


    int largestRectangleArea(int *heights, int m) {
    int n = m;
    
    vector<int>next(n);
    next = smallerNext(heights, n);
    
    vector<int>prev(n);
    prev = smallerPrev(heights, n);
    
    int area = INT_MIN;
    
    for(int i=0; i<n; i++){
    
        int l = heights[i];
    
        if(next[i]== -1){
            next[i]=n;
        }
    
        int b = next[i] - prev[i] - 1;
        int newArea = l*b;
        area = max(area, newArea);   
    
    }       
    
            return area;
    } 
        
    
    int maxArea(int M[][4], int n, int m) {
        // Your code here
             //compute area for first row
        int area = largestRectangleArea(M[0], m);
        
        for(int i = 1; i<n; i++) {
            for(int j = 0; j<m; j++) {
                
                //row udpate: by adding previous row's value
                if(M[i][j] != 0)
                    M[i][j] = M[i][j] + M[i-1][j];
                else
                    M[i][j] = 0;
            }
            
            //entire row is updated now
            area = max(area, largestRectangleArea(M[i],m));
            
        }
        return area;     
        
    }



//{ Driver Code Starts.
int main() {

    int n=4,m=4;
    int M[n][4]={{0, 1, 1, 0},
         {1, 1, 1, 1},
         {1, 1, 1, 1},
         {1, 1, 0, 0}};

        cout <<"Max are can obtained as retangle is : "<< maxArea(M, n, m) << endl;
    }


