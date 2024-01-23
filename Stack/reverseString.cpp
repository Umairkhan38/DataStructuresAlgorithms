#include<iostream>
#include<stack>
#include<stack>
#include<vector>
using namespace std;



int main()
{
string text = "Hello";
stack<char>st;
vector<char>ans;

cout<<"Original string is "<<endl;

for(int i=0;i<text.length(); i++){
    //Store the String into Stack
    st.push(text[i]);
    cout<<text[i]<<" ";

}


while(!st.empty())
{
ans.push_back(st.top());
st.pop();
}

cout<<"\nReverse string is "<<endl;

for(int i=0;i<ans.size(); i++){
      cout<<ans[i]<<" ";  
}

return 0;
}