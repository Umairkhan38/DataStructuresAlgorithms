#include<iostream>
#include<vector>
using namespace std;

 int search(vector<int>& nums, int target) {
    int n =nums.size();
    int left = 0;
    int right = n-1;
    int mid;

    while(left<=right)
    {
        mid = (left+right)/2;
        
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>=nums[left])
        {
            if(target<=nums[mid] && target>=nums[left])
            right = mid-1;
            else
            left = mid+1;
        }
        else
        {
            if(target>=nums[mid]&& target<=nums[right])
            left = mid+1;
            else
            right = mid-1; 
        }   
    }
    return -1;

    }

int main()
{
vector<int>arr{6,5};
int target=6;
cout<<"the element found at index : "<<search(arr,target);

return 0;
}