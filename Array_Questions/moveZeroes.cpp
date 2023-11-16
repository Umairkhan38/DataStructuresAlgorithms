#include<iostream>
using namespace std;

void moveZeroes(int nums[],int n) {
    int nonZero=0;
    for(int j=0; j<n;j++){
        if(nums[j]!=0){
            swap(nums[j],nums[nonZero]);
            nonZero++;
        }
    }
}

void print_Array(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}


int main()
{
    int arr[]={5,0,6,8,0,2,3,12,0,6};
    int n= sizeof(arr)/4;
    cout<<"Array after moving zeroes is : " ;
    moveZeroes(arr, n);
    print_Array(arr,n);

return 0;
}
