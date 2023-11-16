#include<iostream>
using namespace std;
#include <bits/stdc++.h> 


vector<int>reverse(vector<int>v){
	int s=0;
	int e=v.size()-1;

	while(s<e){
		swap(v[s++],v[e--]);
	}
	return v;

}


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

	int i=n-1;
	int j=m-1;
	int carry=0;
	vector<int>ans;
	while(i>=0 && j>=0){

		int sum=a[i]+b[j]+carry;
		carry=sum/10;
		sum%=10;
		ans.push_back(sum);
		i--;
		j--;
	}

	while(i>=0){
		int sum=a[i]+carry;
		carry=sum/10;
		sum%=10;
		ans.push_back(sum);
		i--;
	}
	
	while(j>=0){
		int sum=b[j]+carry;
		carry=sum/10;
		sum%=10;
		ans.push_back(sum);
		j--;
	}

	while(carry!=0){
		int sum=carry;
		carry=sum/10;
		sum%=10;
		ans.push_back(sum);
	}


	return reverse(ans);

}

void printArray(vector<int>v){
    cout<<"Sum of Array is : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
vector<int>v1{4,5,1};
int n=v1.size();
vector<int>v2{3,4,5};
int m=v2.size();
vector<int>sum=findArraySum(v1,n,v2,m);
printArray(sum);



return 0;
}