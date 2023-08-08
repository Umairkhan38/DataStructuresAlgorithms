#include<iostream>
using namespace std;

int searchIn2DArray(int arr[][4],int row,int col, int target){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return -1;
}

void printSum(int arr[][4],int i,int j){
        int temp=-1;
    
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 4; j++)
        {
             sum+=arr[i][j];   
        }
        cout<<"Sum of row "<<i<<" is "<<sum<<endl;
        if(sum>temp){
            temp=sum;
        }

    }
        cout<<"Row with Max sum is "<<temp<<endl;

}


int main()
{
int arr[3][4];
int target=6;
cout<<"Enter the Input to the array "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}

cout<<"The elements of the array is : "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

searchIn2DArray(arr,0,0,target)==1?cout<<"The target element is present in array "<<endl : cout<<"The target element is not present in array"<<endl;


printSum(arr,0,0);

return 0;
}