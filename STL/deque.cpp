#include<iostream>
#include<deque>
using namespace std;

//deque is a double ended queue in which insertion or deletion can be performed at begining and in ending as well

int main()
{
    deque<int>d;
    d.push_back(5);
    //insertion at front
    d.push_front(8);
    d.push_front(9);
    cout<<"ELement at first index is  : "<<d.at(1)<<endl;
    d.pop_front();
    cout<<"ELement at index 1 is  : "<<d.at(1)<<endl;
    cout<<"Front element is "<<d.front()<<endl;
    cout<<"last element is "<<d.back()<<endl;
    //check empty or not
    cout<<"deque is empty or not ? "<<d.empty()<<endl;

    //Erasing an elemnts from deque
    cout<<"Before Erasing the size is "<<d.size()<<endl;
       d.erase(d.begin(),d.begin()+1);  // erase one element from start
    cout<<"After Erasing the size is "<<d.size()<<endl;


return 0;
}