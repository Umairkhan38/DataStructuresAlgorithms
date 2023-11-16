#include<iostream>
using namespace std;

int sumArray(int arr[], int n){


    if(n==0){
        return 0;
    }

    int ans = arr[n-1]+sumArray(arr,n-1);
    return ans;
}

int main()
{
int arr[]={1,3,5,6};
int n=4;
cout<<"Sum of the array is : "<<sumArray(arr,n);

return 0;
}