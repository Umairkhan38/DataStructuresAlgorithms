#include<iostream>
#include<array>
using namespace std;


int main()
{
    //STL array is base on basic array
    array<int,5>arr={10,5,6,65,36};
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<'\t';
    }
    cout<<"\nElement at index 3"<<arr.at(3)<<endl;
    cout<<"Array is empty or not : "<<arr.empty()<<endl;

    cout<<"First element of array is : "<<arr.front()<<endl;
    cout<<"Last element in array : "<<arr.back();
return 0;
}