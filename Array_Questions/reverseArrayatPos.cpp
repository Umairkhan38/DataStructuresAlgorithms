#include<iostream>
using namespace std;

//Aim is to reverse the array from given 'm' index 
void reverseArray(int arr[],int n ,int m){
    int i=m+1,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void print_Array(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
int arr[]={5,6,1,2,9,8,72,56,54,12,3};
int n=sizeof(arr)/4;
int m=5;
cout<<"array element before reversing"<<endl;
print_Array(arr,n);
cout<<"\narray element after reversing"<<endl;
reverseArray(arr,n,m);
print_Array(arr,n);
return 0;
}
