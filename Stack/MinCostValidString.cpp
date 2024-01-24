#include<iostream>
#include<stack>
#include<string>
using namespace std;



int findMinimumCost(string str) {
  // Write your code here
  stack<char>st;
  
  if(str.length()&1){
    return -1;
  }

  for(int i=0; i<str.length() ; i++){
    char ch = str[i];
    
    if(ch == '{'){
      st.push(ch);

    }else{
      if(!st.empty() && st.top()=='{'){
          st.pop();
      }else{

        st.push(ch);

      }
      

    }

  }

  int a=0, b=0;

    while(!st.empty()){
      if(st.top() == '{'){
        b++;
      }else{
        a++;
      }
      st.pop();
    }

    int ans = (a+1)/2 +(b+1)/2;
    return ans;

}

int main()
{
    string str = "{{}}}{";
    cout<<"The Min Cost Required To get Valid string of Parenthes is : "<<findMinimumCost(str);

    return 0;
}