#include<iostream>
#include<limits.h>
using namespace std;


  int reverse(int x) {
        long long reverse=0;
        while(x!=0){
            int rem=x%10;
            if(reverse/10>INT_MAX || reverse<INT_MIN/10){
                return 0;
            }
            reverse=(reverse*10)+rem;
            x=x/10;
        
        }
        return (reverse<INT_MIN || reverse>INT_MAX) ? 0 : reverse;
  }


int main()
{
    int n;
    cout<<"Enter a Number To Reverse\n";    
    cin>>n;
    cout<<"The Reverse number is "<<reverse(n);

return 0;
}