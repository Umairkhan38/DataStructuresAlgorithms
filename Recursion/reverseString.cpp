#include<iostream>
#include<string>
using namespace std;

void reverseWord(string &str,int i,int j){

    //base case
    if(i>j){
        return;
    }
    
    swap(str[i],str[j]);
     reverseWord(str,++i,--j);
}


void reverseUsingOnePointer(string& str, int i){
     
    if(i>str.length()-i-1){
        return ;
    }

    swap(str[i],str[str.length()-1-i]);
    reverseUsingOnePointer(str,++i);

}



int main()
{
    string str="Madam";
    int i=0,j=str.length()-1;

    reverseWord(str,i,j);
    cout<<"the reverse string is : "<<str;
    // reverseUsingOnePointer(str,i);
    // cout<<"the reverse string using single pointer is : "<<str;

    return 0;
}



