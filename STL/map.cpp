#include<iostream>
#include<map>
using namespace std;

int main()
{

//map stores the values  in key value pair
 map<int,string>data;

 data[1]="name";   
 data[2]="address";   
 data[3]="designation";   
 data[4]="salary"; 

data.insert({5,"Hobby"});

cout<<"before erasing"<<endl;
for(auto i:data){
    cout<<i.first<<"->"<<i.second<<" ";
}cout<<endl;

cout<<"finding element -5 "<<data.count(-5);

data.erase(3);

cout<<"\nafter erasing"<<endl;
for(auto i:data){
    cout<<i.first<<"->"<<i.second<<" ";
}cout<<endl;

//finding element
auto it=data.find(4);
cout<<"finding element from key 4 \n";
for(auto i=it;i!=data.end();i++){
    cout<<(*i).first<<" ";
}


return 0;

}