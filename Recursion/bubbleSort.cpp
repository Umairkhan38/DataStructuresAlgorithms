#include<iostream>
using namespace std;

void bubbleSort(int *arr , int n){

    if(n==0 ||  n== 1){
        return ;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    } 

     bubbleSort(arr,n-1);

}


int main()
{
int arr[]={5,2,3,1,6};
int n=sizeof(arr)/4;
bubbleSort(arr,n);
cout<<"the sorted array is : "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}