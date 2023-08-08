#include<iostream>
using namespace std;

int main()
{
int i=56;

//creating a refernce variable
int &j=i;

cout<<"val of i is : "<<i<<endl;
j++;
cout<<"value of 'i' after incrementing its reference variable 'j' is : "<<i;


return 0;
}