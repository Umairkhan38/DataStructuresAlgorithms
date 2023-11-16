#include<iostream>
using namespace std;

bool isPrime(int n){   
    if(n<=1){
        return false;
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    } 
    return true;
}


int main()
{
    int n;
    cout<<"Enter a Number to Check a prime or not ?"<<endl;
    cin>>n;
    isPrime(n)?cout<<n<<" is a prime number" : cout<<n<<" is not a prime number";

return 0;
}
