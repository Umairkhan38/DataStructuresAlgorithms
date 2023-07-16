// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
        int left=0, right=n-1, mid=left+(right-left)/2;
        
            while(left<=right){
                mid=left+(right-left)/2;
                if(arr[mid]==target){
                    return mid;
                }else if(arr[mid]>target){
                    right=mid-1;
                }else{
                    left=mid+1;
                }
            }    
            return -1;
}
 

int main() {
    int arr[10]={2,3,5,6,7,8,10,15,635,662};
    int n = sizeof(arr)/4;
    cout<<"Element Index is "<<binarySearch(arr,n,662);
    return 0;
}
