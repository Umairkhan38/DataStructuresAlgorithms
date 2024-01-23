#include<iostream>
#include<stack>
#include<string>
using namespace std;


bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char>ch;
    
    for(int i=0;i<s.length(); i++){

        if(s[i]=='(' || s[i] == '{' || s[i] == '['){

            //push only opening brackets
            ch.push(s[i]);
        }
        else {
        
        //check stack is empty or not
        if(!ch.empty()){
        
        //now we will check the paranthesis corresponding to the Opening brackets
        if(s[i] == ')' && ch.top()=='(' || s[i] == '}' && ch.top()=='{'
        || s[i] == ']' && ch.top()=='[')  {
                   
                   //pop the respective opening paranthesis from stack
                    ch.pop();
                }
                else{
                    return false;
                }

        }
        else{
            return false;
        }
    }

    }

    return ch.empty();

}



int main()
{
string str = "{([])}";
if(isValidParenthesis(str)){
    cout<<"the given string has valid paranthesis "<<endl;
}
else{
    cout<<"the given string doesn't have valid paranthesis "<<endl;
    
}

return 0;
}