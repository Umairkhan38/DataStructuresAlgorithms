#include<iostream>
using namespace std;


int main()
{
char name[20];
int cnt=0,i=0;
cout<<"Enter your Name"<<endl;
cin>>name;  //cin doesn't execute the chars after space, tab, \n nextline
cout<<"Your name is : "<<name<<endl;

while (name[i]!='\0')
{
   cnt++;
    i++;
}

cout<<"The length of your name is : "<<cnt;


return 0;
}