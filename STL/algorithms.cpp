#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(16);
    v.push_back(23);

    cout<<"Applying Binary Search to find the position of element 16 present or not : "<<binary_search(v.begin(),v.end(),696)<<endl;

    cout<<"finding upper boud of 5 "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<"finding lower boud of 6 "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=8,b=2;
    cout<<"max from a and b is  : "<<max(a,b)<<endl;
    cout<<"min from a and b is  : "<<min(a,b)<<endl;
    string name="Asim";
    reverse(name.begin(),name.end());
    cout<<"reverse name is "<<name<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
          cout<<"Rotated vector is "<<endl;  
    for(auto it:v){
        cout<<it<<" ";
    }
    sort(v.begin(),v.end());
        cout<<"vector After Sorting is "<<endl;  
    for(auto it:v){
        cout<<it<<" ";
        
    }
return 0;
}