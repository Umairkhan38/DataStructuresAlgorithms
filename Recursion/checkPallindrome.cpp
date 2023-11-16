#include<iostream>
using namespace std;


bool isPallindrome(string str, int i, int j){

    //base case
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
     else{
        return isPallindrome(str,i+1,j-1);
     }

}

bool isPallindromeSinglePoiter(string str,int i){

    if(i>str.length()-i-1){
        return true;
    }

    if(str[i]!=str[str.length()-i-1]){
        return false;
    }
    else{
        return isPallindromeSinglePoiter(str,++i);
    }

}


int main()
{
string str = "India";
int i=0, j=str.length()-1;

// if(isPallindrome(str,i,j)){
// cout<<"the given string is pallindrome!"; 
// }
// else{
//  cout<<"the given string is not pallindrome";
// }

if(isPallindromeSinglePoiter(str,i)){
  cout<<"the given string using single pointer is pallindrome!"; 
}
else{
 cout<<"the given string using single pointer is not pallindrome";
}

return 0;
}
