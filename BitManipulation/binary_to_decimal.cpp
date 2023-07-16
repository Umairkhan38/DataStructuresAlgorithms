#include<iostream>
#include<math.h>
using namespace std;

int binarytodec(int n){
int ans=0,i=0;
while(n!=0){
    int rem=n%10;
    ans=rem*pow(2,i)+ans;
    n/=10;
    i++;
}
return ans;

}


int second_appr(int n){
int ans=0,base=1;
while(n!=0){
    int rem=n%10;
    ans=rem*base+ans;
    base*=2;
    n/=10;
}
return ans;

}



int main()
{
int n;
cout<<"Enter a Number in Binary"<<endl;
cin>>n;
cout<<second_appr(n);

return 0;
}

