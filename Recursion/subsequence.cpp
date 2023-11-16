#include<iostream>
#include<vector>
using namespace std;

#include <bits/stdc++.h> 


void solve(string str, string temp, int index, vector<string>&ans){

	//base case
	if(index>=str.length()){

		//here we dont want empty string		
		if(temp.length()>0){
		  ans.push_back(temp);
		  }
		
		return;
	}

	//Recursive Calls
	//excluding function
	solve(str,temp,index+1,ans);
	
	//including function call
	char element=str[index];
	temp.push_back(element);
	solve(str,temp,index+1,ans);

}


vector<string> subsequences(string &str){
	
	// Write your code here
	vector<string>ans;
	string temp="";
	int index=0;
	solve(str,temp,index,ans);
	return ans;
	
}


int main()
{
string str="abc";
vector<string>ans;
ans=subsequences(str);
for(auto i : ans)
{
    cout<<i<<" ,"<<" ";
}

return 0;
}