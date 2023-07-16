#include<iostream>
using namespace std;

bool isPossibleSloution(int stalls[], int k,int n,int mid)
{ 
    int lastPos=stalls[0], cowCount=1;
    for(int i=0;i<n;i++){
        if(stalls[i]-lastPos>=mid){
        cowCount++;
        if(cowCount==k){
            return true; 
        }
        lastPos=stalls[i];
    }
    }
  
    return false;
}
 
int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end)
{
 
    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quickSort(arr, start, p - 1);
 
    // Sorting the right part
    quickSort(arr, p + 1, end);
}
 

int aggressiveCows(int stalls[],int n, int k)
{

  int maxi=-1,ans=-1;
  for(int i=0;i<n;i++){
      maxi=max(stalls[i], maxi);
  }  
    int l=0,r=maxi,mid=l+(r-l)/2;
    
    while(l<=r){
        if(isPossibleSloution(stalls,k,n,mid)){
           ans=mid;
           l=mid+1; 
        }else{
            r=mid-1;
        }
        mid=l+(r-l)/2;
    }
  return ans;
}


int main(){
    int arr[5]={4,2,1,3,6};
    int k=2,n=sizeof(arr)/4;
    quickSort(arr,0,n);
    cout<<"Maximum possible Minimum Distance between Cows is : "<<aggressiveCows(arr,n,k);
}
