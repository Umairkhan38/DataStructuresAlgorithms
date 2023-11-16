#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int long long mid){

     int stdCount=1, pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i] <= mid){
            pageSum+=arr[i];
        }
        else{
            stdCount++;
            if(stdCount>m || arr[i] > mid){
                return false;
            }
           pageSum=arr[i]; 
        }
    }
    return true;
}

long long int bookAllocation(int arr[],int n, int m, int s, long long int e,long long int ans){
      
    //base case
    if(s>e){
        return ans;
    }

    int mid=s+(e-s)/2;

    if(isPossible(arr,n,m,mid)){
         return bookAllocation(arr,n,m,s,mid-1,mid);  
    }else{
         return bookAllocation(arr,n,m,mid+1,e,ans);
    }

}


int main()
{

  int arr[4]={10,20,30,40};
  int n=sizeof(arr)/4,m=2,s=0;
  int long long e=0,ans=-1;
  
    for(int i=0;i<n;i++){
        e+=arr[i];
    }

    cout<<"the possible solution is : "<<bookAllocation(arr,n,m,s,e,ans);
return 0;
}