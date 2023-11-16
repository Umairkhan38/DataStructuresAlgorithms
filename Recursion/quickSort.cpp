#include<iostream>
using namespace std;

int findPartition(int*arr,int s, int e){

    int count=0,pivot=arr[s];

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
   int pivotIndex=s+count;
   swap(arr[pivotIndex],arr[s]);

    int i=s,j=e;
   
   while(i<pivotIndex && j> pivotIndex){

        while(arr[i] <= pivot){
              i++;  
        }

        while(arr[j]>pivot){
            j--;        
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
   }
   return pivotIndex;

}


void quickSort(int *arr,int s, int e){

    //base case
    if(s>=e){
        return ;
    }

    int p = findPartition(arr,s,e);

    //Recursive call
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}


int main()
{
int arr[]={5,1,3,7,9,2,6,4};
int n=sizeof(arr)/4;
int s=0, e=n-1;
quickSort(arr,s,e);

cout<<"Sorted array is "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}

