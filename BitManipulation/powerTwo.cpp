#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {


//         long long  base=1;
//     for(long long i=0;i<32;i++){
//         if(n==base){
//             return true;
//         }
//         base*=2;
// }
// return false;

// for(int i=0;i<=30;i++){
//     long ans=pow(2,i);
//     if(ans==n)
//       return true;
    
// }
//     return false;

        
        //optimized approach
    	return n < 1 ? false : (n & (n - 1)) == 0 ? true : false;


    }


int findPower(int a,int b){
    int ans=1;
    while(b>0){
      ans*=a;
      b--;
    }

    return ans;
}



int main()
{
// int n;
// cout<<"Enter a Number to Check Its Power of Two or Not?\n";
// cin>>n;

// (isPowerOfTwo(n)==true)?cout<<n<<" is a power of two ":cout<<n<<" is not a powerof two";

cout<<findPower(5,2);

return 0; 
}