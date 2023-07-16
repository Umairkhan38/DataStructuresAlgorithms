#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    // Write your code here.
   for(int i=1;i<n;i++){
       int key=arr[i], j=i-1;
       while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
       }
       arr[j+1]=key;
   }
}

void printArray(int arr[],int n){
    cout<<"Array Elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<'\t';
    }

}

int main()
{
int arr[]={8,6,7,5,12,10};
int n=sizeof(arr)/4;
cout<<"Array Before Sorting is : \n";
printArray(arr,n);
cout<<"\nArray After Sorting is : \n";
insertionSort(arr,n);
printArray(arr,n);

return 0;
}