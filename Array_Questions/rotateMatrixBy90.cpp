#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&arr){
    int i=0,j=arr.size()-1;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
}


 void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
         
        for(int i = 0; i<row ; i++){
            for(int j = 0 ; j<i ; j++){
               cout<<"matrix for i : "<<i<<" and j : "<<j<<" is : "<<matrix[i][j]<<" ";
               cout<<"matrix for j : "<<j<<" and i : "<<i<<" is : "<<matrix[j][i]<<" ";
                swap(matrix[i][j] , matrix[j][i]);
            cout<<endl;
            }
        }
        
        for(int i=0;i<row;i++){
            reverse(matrix[i]);
        }    
    
}

    


int main()
{
 vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
  rotate(matrix);

  cout<<"the rotated array is "<<endl;
  for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
        cout<<matrix[i][j]<<" ";
    }
  }  

return 0;
}

