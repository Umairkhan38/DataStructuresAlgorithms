#include<iostream>
#include<string>
using namespace std;

char isLowerCase(char c){   
//this function is to convert the higher case char to lower case so that it can't return false for a chars with diffrent cases but same alphabates

    if(c>='a'&&c<='z'){
        return c;
    }else{
        return c-'A'+'a';
    }
}


bool checkPallindrome(string data){
    int i=0,j=data.length()-1;
    while(i<=j){
    if(isLowerCase(data[i])==isLowerCase(data[j])){
        i++;j--;
    }else{
        return false;
    }
}   
return true;
}


int main()
{
string data;
cout<<"Enter the string"<<endl;
cin>>data;
checkPallindrome(data)==true?cout<<"the given string is Pallindrome":cout<<"the given string is not a Pallindrome";
return 0;
}
