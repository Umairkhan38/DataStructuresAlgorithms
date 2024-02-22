#include<iostream>
#include<stack>
#include<limits.h>
#include<vector>
using namespace std;


//optimized approach

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


 //brute force approach
    // int maxArea = -1;
    // for(int i=0 ;i<n ; i++){

    //     int left = i-1, right =i+1;
    //       int area = heights[i];  

    //     while(left>=0 && heights[left]>=heights[i]){

    //         if(heights[left]==heights[i]){
    //         area+=heights[left--];
    //         }
    //         else{
    //             area += heights[i];
    //             left--;
    //         }

    //         cout<<"area in left is "<<area<<endl;
    //     }


    //     while(right<=n-1 && heights[right]>=heights[i]){

    //          if(heights[right] == heights[i]){
    //         area+=heights[right++];
    //         }
    //         else{
    //             area += heights[i];
    //             right++;
    //         }
    //         cout<<"area in right is "<<area<<endl;
    //     }

    //     maxArea = max(area, maxArea);
    //     cout<<"max area in iteratrion "<<i <<" is "<<maxArea <<endl;

    // }
    
    // return maxArea;

}
 


int main()
{
    
vector<int> heights = {2,1,5,6,2,3};
int ans= largestRectangleArea(heights);
cout<<"The Larget Rectangular Area according to given heights is : "<<ans<<endl;

return 0;

}
