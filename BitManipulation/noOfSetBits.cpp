#include<iostream>
using namespace std;


int noOfSetBits(int a,int b){
int cnt=0;

while(a!=0){
    if (a&1==1)
    {
        cnt++;
    }
    a>>=1;
}


while(b!=0){
    if (b&1==1)
    {
        cnt++;
    }
    b>>=1;
}

return cnt;

}


int main()
{
    int a,b;
cout<<"Enter a \n";
cin>>a;
cout<<"Enter b\n";
cin>>b;

cout<<"No Of Ones are "<<noOfSetBits(a,b);

return 0;
}








