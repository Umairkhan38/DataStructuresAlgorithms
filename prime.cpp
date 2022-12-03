#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



int main(){
    int n; 
    cout<<"Enter the number to check its prime or not"<<endl;
    cin>>n;
    isPrime(n)==true?cout<<n<<" is a prime number":cout<<n<<" is not a prime number";
    
    return 0;
}







