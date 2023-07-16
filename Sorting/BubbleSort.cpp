#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    // Write your code here.
    for(int i=1;i<n;i++){
        bool swapped=false;

        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
         }
         
        if(swapped==false){
                break;
            }
    }
    // sort(arr.begin(),arr.end());
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
int arr[]={3,5,6,5,89,20};
int n=sizeof(arr)/4;
cout<<"Array Before Sorting is : \n";
printArray(arr,n);
cout<<"\nArray After Sorting is : \n";
bubbleSort(arr,n);
printArray(arr,n);

return 0;
}