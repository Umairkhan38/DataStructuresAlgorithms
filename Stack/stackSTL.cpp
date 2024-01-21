#include<iostream>
#include<stack>
using namespace std;


int main()
{
  stack<int>temp;

  //insertion
  temp.push(25);
  temp.push(65);
  temp.push(20);  

     
  while(!temp.empty()){
    cout<<temp.top()<<" ";
     temp.pop(); 
     if(temp.empty()){
        cout<<"\nThe stack is Empty Now!"<<endl;
     }  
  }  

return 0;
}