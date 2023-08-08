#include<iostream>
using namespace std;

void mergArray(int arr1[],int n, int arr2[], int m, int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if (arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;i++;
        }else{
            arr3[k]=arr2[j];
            k++;j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;k++;
    }

    while(j<m){
        arr3[k]=arr1[j];
        j++;k++;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
int arr[]={1,3,5,6,7}, n=sizeof(arr)/4;
int arr1[]={2,3,4}, m = sizeof(arr1)/4;
int mergedSize=m+n;
int merged[mergedSize];
mergArray(arr,n,arr1,m,merged);
printArray(merged,mergedSize);

return 0;

}
