#include<iostream>
#include<stack>
#include<limits.h>
#include<vector>
using namespace std;


vector<int>smallerNext(vector<int>arr, int n){

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



vector<int>smallerPrev(vector<int>arr, int n){

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


int largestRectangleArea(vector<int>& heights) {
int n = heights.size();

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
 


int main()
{
    
vector<int> heights = {2,1,5,6,2,3};
int ans= largestRectangleArea(heights);
cout<<"The Larget Rectangular Area according to given heights is : "<<ans<<endl;

return 0;

}
