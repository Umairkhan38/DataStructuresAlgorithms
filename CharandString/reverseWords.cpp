#include<iostream>
#include<string>
using namespace std;

string reverseWord(string str){
    int i=0,j=str.length()-1;
    while(i<j){
        swap(str[i++],str[j--]);
    }
    return str;
}


string reverseStr(string s)
{
    int i = 0, n = s.length();
    string temp="", finalStr = "";
    
    while (i <= n)
    {
        if (s[i] != ' ' && s[i] != '\0')
        {
            temp.push_back(s[i]);
        }
        else
        {

            temp = reverseWord(temp);
            
            if (s[i] == ' ' && temp.empty()==0)
            {
                temp.push_back(' ');
            }
            int j = 0;
            while (j < temp.length())
            {
                finalStr.push_back(temp[j]);
                j++;
            }
            temp = "";
        }
        i++;
    }
    
    if(finalStr[finalStr.length()-1]==' '){
        finalStr.pop_back();
    }
    return finalStr;
}


int main()
{
string str="My Name is Khan";   
string rev=reverseStr(str);
cout<<"the string with reverse word is:"<<rev;
return 0;
}