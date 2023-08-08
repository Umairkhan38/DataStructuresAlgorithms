#include<iostream>
using namespace std;

//the memory dynamic allocation in cpp is done by using new keyword
int getSum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;

}


int main()
{
int n;
cout<<"Enter the size of array "<<endl;
cin>>n;

// using new keyword the memory space allocated in heap memory 
int *arr=new int[n];    //dynamically passing a array size 
cout<<"Enter the elements of array "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"the sum of all elements of the array is : "<<getSum(arr,n)<<endl;
delete []arr;   //deleting memory allocated to array
cout<<"array size after deletion is : "<<sizeof(arr)/4; 

return 0;
}