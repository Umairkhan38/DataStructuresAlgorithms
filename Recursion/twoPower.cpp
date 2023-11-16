#include<iostream>
using namespace std;

int Power(int n){

    if(n==0){
        return 1;
    }
    int power=2*Power(n-1);
    return power;
}

int main()
{
    int n=3;
    cout<<"the 2 power "<<n<<" is "<<Power(n); 

return 0;
}