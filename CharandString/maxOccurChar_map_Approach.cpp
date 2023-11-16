#include<iostream>
#include<map>
#include<string>
using namespace std;

 char getMaxOccuringChar(string str)
    {
    int max=-1;
    char ans;
    map<char,int>mp;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    
    for(auto i:mp){
        if(i.second>max){
            max=i.second;
            ans=i.first;
        }
    }
     return ans;
    }

int main()
{
string str="output";
cout<<"most ocurring character of "<<str<<" is : "<<getMaxOccuringChar(str);

return 0;
}