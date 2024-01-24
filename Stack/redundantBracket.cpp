#include <bits/stdc++.h> 
using namespace std;

bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>st;

    for(int i=0; i<s.length(); i++){

        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '/' || ch == '-' || ch == '*'){
            st.push(ch);

        }
        else{

            if(ch == ')'){

            bool isRedundant = true;
            while(st.top()!='('){
            char top = st.top();
              if( top == '+' || top == '/' || top == '-' || top == '*'){
                  isRedundant = false; 
                }
                st.pop();
            }
            if(isRedundant == true){
                return true;
            }
             st.pop();

        }

        }
    }

        return false;


    
}



int main()
{

string str = "((a+b))" ;
bool ans = findRedundantBrackets(str);

ans?cout<<"The Redundant Bracket is present "<<endl : cout<<"The Redundant Bracket is not Present "<<endl;


return 0;
}


