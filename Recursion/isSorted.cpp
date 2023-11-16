#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){

    //base case
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }

    bool ans=isSorted(arr+1, size-1);

    return ans;
}

int main()
{
int arr[]={1,2,6,5,6,7,8};
int size=sizeof(arr)/4;
(isSorted(arr,size))?cout<<"the array is sorted" : cout<<"array is not sorted";

return 0;
}