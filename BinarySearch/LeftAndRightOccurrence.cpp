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

int arr[5]={0,1,2,2,2};
int n=sizeof(arr)/4;
cout<<"Left Occurence is "<<firstOccur(arr,n,2)<<endl;
cout<<"last Occurence is "<<lastOccur(arr,n,2);
return 0;
}