#include<iostream>
#include<queue>
using namespace std;

int main()
{
   queue<string>q;
    q.push("india");
    q.push("Australia");
    q.push("England");
    cout<<"front queue before pop is : "<<q.front()<<endl;
    cout<<"size of a queue is : "<<q.size()<<endl;
    q.pop();
    cout<<"size of a queue after Pop is : "<<q.size()<<endl;
    cout<<"front of a queue after Pop is : "<<q.front()<<endl;


return 0;
}