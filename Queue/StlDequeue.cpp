#include<iostream>
#include<queue>
using namespace std;


int main()
{
deque<int>dq;

//pushing from front
dq.push_front(5);
dq.push_front(8);
dq.push_front(6);

//pushing from back
dq.push_back(2);
dq.push_back(3);

cout<<"the size of a queue before pop "<<dq.size()<<endl;

//pop from front
cout<<"removing element from front : "<<dq.front()<<endl;
dq.pop_front();
cout<<"removing  element from back : "<<dq.back()<<endl;
dq.pop_back();

cout<<"the size of a queue after pop "<<dq.size()<<endl;

return 0;
}
