#include<iostream>
using namespace std;


int findPivotInRotatedArray(int arr[], int n){
    int l=0, r=n-1, mid=l+(r-l)/2;
    while(l<r){
        if(arr[mid]>=arr[0]){
            l=mid+1;
        }else if(arr[mid]<arr[0]){
            r=mid;
        }
        mid=l+(r-l)/2;
    }
    return l;
}


int main(){
    int arr[5]={4,5,1,2,3};
    int n=sizeof(arr)/4;
    cout<<"Index of pivot element is "<<findPivotInRotatedArray(arr,n);
}