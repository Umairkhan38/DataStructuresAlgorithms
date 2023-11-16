#include<iostream>
using namespace std;

//BinarySearch Function
int BinarySearch(int arr[],int start,int end,int k){
    int s=start;
    int e=end;
    while(s<=e){
   int mid=s+(e-s)/2;

       if(arr[mid]==k){
           return mid;
       }      
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
} 


//Function To Find Pivot
int findpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<e){
        
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            
            e=mid;
            }
            
        mid=s+(e-s)/2;
    }
    return s;
}


int findPosition(int arr[], int n, int k)
{
    // Write your code here.
    int pivot=findpivot(arr,n);
        if(k>=arr[pivot] && k<arr[0])
        {
            return BinarySearch(arr,pivot,n-1,k);
        }    
    else{
        return  BinarySearch(arr,0,pivot-1,k);
    }

}


// Main Function 
int main(){
    int arr[2]={1,3};
    int n= sizeof(arr)/4,k=3;
    cout<<"The position of element k in rotated array is at index : "<<findPosition(arr,n, k);
}
