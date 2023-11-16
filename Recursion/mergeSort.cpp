#include<iostream>
using namespace std;


void merge(int *arr, int s, int e){

    int mid=s+(e-s)/2;
    int len1 = mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }

    //for second array
     k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

    int index1 = 0;
    int index2 = 0;
    int mainIdx=s;

    while(index1 < len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIdx++]=first[index1++];
        }else{
            arr[mainIdx++]=second[index2++];
        }
    }  

    while(index1<len1){
        arr[mainIdx++]=first[index1++];
    }
    
    while(index2<len2){
        arr[mainIdx++]=second[index2++];
    }

}


void mergeSort(int *arr,int s, int e){

    //base case
    if(s>=e){
        return ;
    }

    int mid=s+(e-s)/2;
    //for sorting left part
    mergeSort(arr,s,mid);

    //for searching in a right part
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}

//Iterative Approach



int main()
{
    int arr[]={9,5,7,3,1};
    int n = sizeof(arr)/4;
    int s=0,e=n-1;
    mergeSort(arr,s,e);
    cout<<"The Sorted Array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

