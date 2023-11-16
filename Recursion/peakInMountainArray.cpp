#include<iostream>
using namespace std;

int peakInMountainArray(int arr[], int s, int e)
{
 //base case   
 if(s>=e){
    return arr[s];
 }   

    int mid=s+(e-s)/2;
    if(arr[mid]<arr[mid+1]){
      return peakInMountainArray(arr,mid+1,e);
    }else{
       return peakInMountainArray(arr,s,mid);
    }

}

int main()
{
 int arr[4]={0,10,5,2};
    int s=0, e=(sizeof(arr)/4)-1;
    cout<<"Index of peak element is : "<<peakInMountainArray(arr,s,e);

return 0;
}

