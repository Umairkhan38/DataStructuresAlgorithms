#include<iostream>
using namespace std;

bool isPossible(int boards[],int n,int k,int mid){
    int paintersCount=1,sumLength=0;
    for(int i=0;i<n;i++){
        if(boards[i]+sumLength<=mid){
            sumLength+=boards[i];
        }else{
            paintersCount++;
            if(paintersCount>k || boards[i]>mid){
                return false;
            }
            sumLength=boards[i];
        }
     
    }
    return true;
}


int findLargestMinDistance(int boards[],int n, int k)
{
    int s=0,ans=-1,sum=0;
    for(int i=0;i<n;i++){
          sum+=boards[i];
    }
    int e=sum,mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(boards,n,k,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int boards[5]={5 ,5, 5, 5};
    int n = sizeof(boards)/4,k=2;
    cout<<findLargestMinDistance(boards,n,k);

}