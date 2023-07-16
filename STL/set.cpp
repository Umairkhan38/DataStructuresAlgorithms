#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;  //its a ordered set means it will sort the input values and store value uniquely
    s.insert(8);
    s.insert(5);
    s.insert(8);
    s.insert(6);
    
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    //Making iterator for set
    set<int>::iterator it=s.begin();
    it++;   // it will point to the second element of the list
    cout<<"erasing second element from the list\n";
    s.erase(it);   // passing refernce of 2nd elem from set to erase it
    for(auto itr : s){
        cout<<itr <<" ";
    }cout<<endl;

    //count() frunction to check the specific number exist or not in a set
    cout<<"here to check that 9 exist or not : "<<s.count(9)<<endl;

    //find() function is used to find the position of an given element 
    //make iterator to find the element
    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++){      //here we are finding elements from 5 to the last elem which is 8
        cout<<*it<<" ";
    }cout<<endl;


return 0;
}