#include<iostream>
using namespace std;

// C++ provides inline functions to reduce the function call overhead. An inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call.

inline int getMax(int& a,int& b){
     return  (a>b)? a : b;  
}

int main()
{
int a=5,b=12;
int ans=getMax(a,b);    // in this while time compilation its replaced by (a > b) ? a : b
cout<<"the max val by inline function is : "<<getMax(a,b)<<endl;


return 0;
}