#include<iostream>
using namespace std;


int binarySearch(int arr[], int s, int e, int target){

    //base case
    if(s>e){
        return -1;
    }
    
    int mid=s+(e-s)/2;
    
    if(arr[mid]==target){
    return mid;
    } 

    if(arr[mid]<target){
        return binarySearch(arr,mid+1,e,target);
    }else{
        return binarySearch(arr,s,mid-1,target);
    }
    
}


int main()
{
int arr[]={1,2,3,5,6,7,8};
int s=0, e=(sizeof(arr)/4)-1, target=4;
(binarySearch(arr,s,e,target) == -1) ?cout<<"Element not found" : cout<<"elment fount at index : "<<binarySearch(arr,s,e,target)<<endl;

return 0;
}
