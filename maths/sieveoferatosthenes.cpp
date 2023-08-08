#include<iostream>
#include<vector>
using namespace std;

// The sieve of eratosthenes is a method to find the number of prime numbers in a given range 'n'
// Time Complexity O*(log(logn))

int seiveOfEratosthenes(int n){

       int count=0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;

        for(int i=2; i<n; i++){
            if(prime[i]){
                count++;
            }
            for(int j=2*i; j<n;j+=i){
                prime[j]=0;
            }
        }
        return count;

}

int main()
{
int n;
cout<<"Enter the number to know the no of primes"<<endl;
cin>>n;
cout<<"The number of prime numbers in a range of "<<n <<" is : "<<seiveOfEratosthenes(n);

return 0;
}
