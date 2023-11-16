#include<iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }

   int fact=n*factorial(n-1);
   cout<<"fact val is : "<<fact<<endl;
   return fact;

}

int main()
{
int n=5;
cout<<"final ans is "<<factorial(5);
return 0;
}