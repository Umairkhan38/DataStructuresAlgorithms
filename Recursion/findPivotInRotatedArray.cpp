#include<iostream>
using namespace std;

int findPivotInRotatedArray(int arr[], int s, int e){

    //base case
    if(s>=e){
        return arr[s];
    }    
    
    int mid=s+(e-s)/2;

    if(arr[mid]>=arr[0]){
        return findPivotInRotatedArray(arr, mid+1,e);
    }else{
        return findPivotInRotatedArray(arr, s,mid);
    }
}


int main()
{
   int arr[5]={4,5,1,2,3};
    int s=0,e=(sizeof(arr)/4)-1;
    cout<<"the pivot element of the array is : "<<findPivotInRotatedArray(arr,s,e);
    return 0;
}
