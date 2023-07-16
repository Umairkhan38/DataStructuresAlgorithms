#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{   
   for(int i=0;i<n;i++){
       int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
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
int arr[]={2,8,9,10,1,5,4,6};
int n=sizeof(arr)/4;
cout<<"Array Before Sorting is : \n";
printArray(arr,n);
cout<<"\nArray After Sorting is : \n";
selectionSort(arr,n);
printArray(arr,n);
return 0;
}