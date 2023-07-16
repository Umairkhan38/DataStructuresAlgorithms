#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>maxi; //this priority queue will give a priority to max element
    priority_queue<int,vector<int>,greater<int>>mini; //this priority queue will give a priority to minimum element

    maxi.push(5);
    maxi.push(65);
    maxi.push(23);
    maxi.push(22);
    int n=maxi.size();
    cout<<"popping element from maxi priority queue"<<endl;
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    cout<<"popping element from mini priority queue"<<endl;
    mini.push(85);
    mini.push(2);
    mini.push(5);
    mini.push(65);
    mini.push(215);
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"checking mini is empty or not "<<mini.empty();

return 0;
}