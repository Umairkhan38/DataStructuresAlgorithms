#include<iostream>
#include<queue>
using namespace std;


int main()
{
    queue<int>q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    cout<<"Front at "<<q.front()<<endl;
    cout<<"Rear at "<<q.back()<<endl;


    q.pop();
    cout<<"size of a queue is "<<q.size()<<endl;

    if(!q.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }

    return 0;
}
