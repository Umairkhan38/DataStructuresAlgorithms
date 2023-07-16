#include<iostream>
using namespace std;

int firstOccur( int arr[],int n,int k){
    int l=0,r=n-1,ans=-1;
    int mid=l+(r-l)/2;
    while(l<=r){
        if(arr[mid]==k){
            ans=mid;
            r=mid-1;
        }else if(arr[mid]>k){
            r=mid-1;
        }else{
            l=mid+1;
        }
        mid=l+(r-l)/2;
    }
    return ans;
}


int lastOccur(int arr[],int n,int k){
    int l=0,r=n-1,ans=-1;
    int mid=l+(r-l)/2;
    while(l<=r){
        if(arr[mid]==k){
            ans=mid;
            l=mid+1;
        }else if(arr[mid]>k){
            r=mid-1;
        }else{
            l=mid+1;
        }
        mid=l+(r-l)/2;
    }
    return ans;
}



int main()
{
int arr[9]={0,1,1,1,1,1,2,2,2};
int n=sizeof(arr)/4;
int occurrence=lastOccur(arr,n,1)-firstOccur(arr,n,1)+1;
cout<<"No of Occurence of 1 is "<<occurrence;

return 0;
}
