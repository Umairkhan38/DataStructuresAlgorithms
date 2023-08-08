#include<iostream>
using namespace std;

int main()
{
//pointer used to store the address of variable 
//eg:
int arr[5]={2,6,5,6};
int num=56;
int *ptr=&num;  //&passing the address of num to ptr
//now *ptr have access to the variable num

int *newPtr=ptr;    //copying a pointer
cout<<"new pointer value after copying is "<<*newPtr<<endl;

cout<<ptr<<endl;  //it represent address of num 
cout<<*ptr<<endl; //it represents the value of num
(*ptr)++;    
cout<<"ptr after increment "<<*ptr<<endl;     

cout<<"the first element of the array is "<<*arr<<endl;
cout<<"2nd element of the array is : "<<*(arr+1)<<endl;

return 0;
}
