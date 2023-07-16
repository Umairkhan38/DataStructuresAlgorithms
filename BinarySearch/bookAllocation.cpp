#include<iostream>
using namespace std;

bool isPossible(int n, int m, int arr[],long long int mid){
	 long long int stdCnt=1;
	 long long int timeSum=0;
	 for(int i=0;i<n;i++){
		 if(timeSum+arr[i]<=mid){
			 timeSum+=arr[i];
		 }
		 else{
			 stdCnt++;
			 if(stdCnt > m || arr[i]>mid){
				 return false;
			 }
			 else{
				 timeSum=arr[i];
			 }
			 
		 }
	 }
	 return true;
	
}


long long bookAllocation(int n, int m, int time[]) 
{	
	// Write your code here.
	long long int s=0;
	long long int  sum=0;
	for(int i=0;i<n;i++){
		sum+=time[i];
	}

	
	long long int  e=sum;
	long long int ans=-1;
	
	while(s<=e){
		long long int mid = s+(e-s)/2;
		if(isPossible(n, m, time, mid))
		{
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	
	}
	return ans;
}


int main(){
    int arr[4]={10,20,30,40};
    int n=sizeof(arr)/4,m=2;
    cout<<bookAllocation(n,m,arr);
}