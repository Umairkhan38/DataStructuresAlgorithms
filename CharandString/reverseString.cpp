#include<iostream>
using namespace std;

int main()
{
char name[20];
cout<<"Enter your name"<<endl;
cin>>name;
 int i=0,j=(sizeof(name)-1)/4;

        while(i<j){
            swap(name[i++],name[j--]);
        }
    cout<<"The reverse of your name is : "<<name;

return 0;
}


