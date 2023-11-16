#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int s, int e, int key,int ans){

    if(s>e){
        return ans;
    }

    int mid=s+(e-s)/2;

    if(arr[mid]==key){
        return firstOccurrence(arr,s,mid-1,key,mid);
    }
   else if (arr[mid]<key)
    {
        return firstOccurrence(arr,mid+1,e,key,ans);
    }
    else if(arr[mid]>key){
        return firstOccurrence(arr,s,mid-1,key,ans);
    } 

}

int lastOccurrence(int arr[], int s, int e, int key, int ans)
{
    //base case
    if(s>e){
        return ans;
    }

    int mid=s+(e-s)/2;

    if(arr[mid]==key){
     return  lastOccurrence(arr,mid+1,e,key,mid);
    }

    else if(arr[mid] > key){
            return  lastOccurrence(arr,s,mid+1,key,ans);

    }else{
            return  lastOccurrence(arr,mid-1,e,key,ans);
    }

}


int main()
{
int arr[6]={0,1,1,2,2,2};
int s=0,e=(sizeof(arr)/4)-1,ans=-1,key=2;
cout<<"first Occurence of "<<key<<" is at Index : "<<firstOccurrence(arr,s,e,key,ans)<<endl;
cout<<"last Occurence of "<<key<<" is at Index : "<<lastOccurrence(arr,s,e,key,ans)<<endl;
cout<<"the No of occurrence of "<<key<<" is "<<lastOccurrence(arr,s,e,key,ans) - firstOccurrence(arr,s,e,key,ans)+1;
return 0;
}
