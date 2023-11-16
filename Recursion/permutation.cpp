#include<iostream>
#include<vector>
using namespace std;

  void solve(vector<int>nums, vector<vector<int>>&ans , int index){

            //base case
            if(index>=nums.size()){
                ans.push_back(nums);
                return ;
            }

          for(int j=index;j<nums.size();j++){
              swap(nums[j],nums[index]);
              //recursive call
              solve(nums, ans ,index+1);

              //backtracking
              swap(nums[j],nums[index]);      
          }  
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums,ans,index);
        return ans;    
    }


int main()
{
vector<int>nums={1,2,3};
vector<vector<int>>ans;
ans=permute(nums);
cout<<"the permutation of given array"<<endl;

cout<<"{ ";

for (int i = 0; i <ans.size(); i++)
{   
    cout<<"[";
    for (int j = 0; j <ans[i].size(); j++)
    {
        cout<<ans[i][j];
    }
    cout<<"] , ";
        
}
    cout<<"}";


return 0;
}