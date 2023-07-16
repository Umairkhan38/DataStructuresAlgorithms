#include<iostream>
using namespace std;
    int peakIndexInMountainArray(int arr[],int n) {
        int l=0, r=n-1,  mid=l+(r-l)/2;
        while(l<r){
            if(arr[mid]<arr[mid+1]){
                    l=mid+1;
            }
            else{
             r=mid;
            }
            mid=l+(r-l)/2;
        }
        return l;
    }

int main()
{
    int arr[4]={0,10,5,2};
    int n=sizeof(arr)/4;
    cout<<"Index of peak element is : "<<peakIndexInMountainArray(arr,n);

return 0;
}