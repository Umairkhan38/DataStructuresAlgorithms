#include<iostream>
using namespace std;

int fib(int n) {

    //recursion approach        
        // if(n==0){
        //     return 0;
        // }
        // if(n==1){
        //     return 1;
        // }

        // int sum=fib(n-1)+fib(n-2);
        // return sum;


//iterative approach
int a=0,b=1,sum=0;
    for(int i=0;i<n;i++){
        sum=a+b;
        b=a;
        a=sum;
    }
        
        return sum;
    }



int main()
{
    int n=10;
    cout<<fib(n);

return 0;
}