#include<iostream>
#include<list>
using namespace std;

int main()
{
// list is Based on Doubly Link List
list<int>l;
list<int>n(100,50);  
l.push_back(5);
l.push_front(89);
cout<<"Printing 'n' list"<<endl;
for(int i:n){
    cout<<i<<" ";
}

cout<<endl;
//Erasing the element from list 
cout<<"After erasing"<<endl;
l.erase(l.begin());
for(int i:l){
    cout<<i<<" ";
}

return 0;
}