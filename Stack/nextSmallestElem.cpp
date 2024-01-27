#include<iostream>
#include<stack>
#include<vector>
using namespace std;


vector<int> nextSmallerElement(vector<int> &arr, int n)
{

    stack<int>st;
    vector<int>ans(n);
    st.push(-1);

    for(int i=n-1; i>=0; i--){

        int curr = arr[i];

        while(st.top() >= curr){
            st.pop();
        }

        ans[i] = st.top();

         st.push(curr);   
    }

    return ans;
}




int main()
{
    
vector<int>arr = {2, 1, 4, 3};
vector<int>ans = nextSmallerElement(arr,arr.size());

cout<<"the next smallest elements are : "<<endl;

for(int i=0;i<ans.size() ; i++){

    cout<<ans[i]<<" ";
}

return 0;

}

