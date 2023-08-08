#include<iostream>
using namespace std;


int main()
{
int a=85;
int *p=&a;
int **q=&p;

cout<<"the *p stores val of a which is : "<<*p<<endl;
cout<<"the **q stores val pointed by p a which is : "<<p<<endl;
cout<<"the p stores address of a which is : "<<p<<endl;
cout<<"the **q stores val of *p which is : "<<**q<<endl;
cout<<"the *q stores address of p which is : "<<*q<<endl;

return 0;
}