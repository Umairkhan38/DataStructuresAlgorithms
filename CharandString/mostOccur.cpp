#include<iostream>
#include<string>
using namespace std;

char mostOccur(string s){
    int arr[26]={0};
     int number=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            number=s[i]-'a';
        }else{
            number=s[i]-'A';
        }
       arr[number]++;     
    }
    int maxi=-1,ans=0;
    for(int i=0;i<sizeof(arr)/4;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            ans=i;
        }
    }
      return ans+'a';  
}


int main()
{
string str;
cout<<"Enter the String "<<endl;
cin>>str;
cout<<"most occuring character in string is : "<<mostOccur(str);

return 0;
}