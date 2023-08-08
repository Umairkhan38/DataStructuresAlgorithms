#include<iostream>
using namespace std;

int main(){

int n,m;
cout<<"enter the no of row and columns of the 2d array "<<endl;
cin>>n>>m;

int** arr=new int*[n];

for(int i=0;i<n;i++){
    arr[i]= new int[m];
}


//taking input to the array
cout<<"enter elements of the array "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

cout<<endl;
//showing output
cout<<"the elements of the array are "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


cout<<"deleting array from memory "<<endl;
for(int i=0;i<n;i++){
     delete []arr[i];   //deleeting row-wise elements
}

delete []arr;


cout<<"size of array after deletion "<<sizeof(arr)/4<<endl;

return 0;
}