#include<iostream>
#include<vector>
using namespace std;

int main()
{
 vector<int>v;
  //Initailizing all elements with default value
  vector<int>a(5,3);       // here svector withsize 5 is initialized  and all elements with default value 3
    for(int i:a){
        cout<<i<<" ";
    }


 cout<<"\ncapacity of vector is : "<<v.capacity()<<endl;
 v.push_back(5);
 cout<<"capacity of vector is : "<<v.capacity()<<endl;
 v.push_back(10);
 cout<<"capacity of vector is : "<<v.capacity()<<endl;
 v.push_back(15);
 cout<<"capacity of vector is : "<<v.capacity()<<endl;
 cout<<"Before POP operation\n";
    for(int i:v){
        cout<<i<<" ";
    }
    v.pop_back();
   cout<<"\nAfter POP\n";
   for(int i:v){
    cout<<i<<" ";
   } 
cout<<"\ncapacity of vector is : "<<v.capacity()<<endl;
cout<<"Size of a vector is : "<<v.size()<<endl;
cout<<"\nElement at index 1 is : "<<v.at(1)<<endl;
cout<<"Vector is empty or not : "<<v.empty()<<endl;
cout<<"First element of array is : "<<v.front()<<endl;
cout<<"Last element in array : "<<v.back()<<endl;

//clearing al elements from vector

cout<<"Before Clearing size of  Vector is : "<<v.size()<<endl;
v.clear();
cout<<"After Clearing size of  Vector is : "<<v.size()<<endl;

return 0;
}