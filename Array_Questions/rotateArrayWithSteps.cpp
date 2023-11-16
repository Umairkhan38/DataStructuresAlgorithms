#include<iostream>
#include<vector>
using namespace std;

  void rotate(vector<int>&nums, int k) {
             vector<int>temp(nums.size());
            
          for(int i=0;i<nums.size();i++){
              temp[(i+k)%nums.size()] =  nums[i];
          }
          nums=temp;
    }
    
 int main(){
  vector<int>nums={1,2,3,5,6};
  int k=2;
  rotate(nums,k=2);
  cout<<"The Rotated Array is "<<endl;
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
  }
 }   