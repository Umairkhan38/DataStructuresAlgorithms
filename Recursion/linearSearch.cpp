#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k){

    //base case 
    if(size==0){
        return false;
    }

    if(arr[0]==k){
        return true;
    }
    else{
        //make recursive call
        int ans=linearSearch(arr+1,size-1,k);
        return ans;
    }

}

int main()
{
int arr[]={1,2,3,5,6,7};
int size=6,k=4;

(linearSearch(arr,size,k))?cout<<"element is present in an array " : cout<<"element is not present in an array"<<endl;

return 0;
}