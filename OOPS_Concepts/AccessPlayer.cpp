#include<iostream>
#include "PlayerClass.cpp"
using namespace std;


int main()
{
    //static object creation
    Player p1(35000,"Virat Kohli");
    
    //creating object using dynamic memory allocation
    Player *p2 = new Player(20000,"Virat Kohli");

    Player p3 (*p2);

    //directly access to the public member
    cout<<"Player Name is : "<<p1.name<<endl;

    //Accessing a Private Member through a function can't directly
    p1.setRuns(12000);  //passign value to the set Function
    cout<<"The Runs of "<<p1.name<<" in ODI is : "<<p1.getRuns()<<endl;

    //Accessing members using dynamic object
    p2->setRuns(10000);
    cout<<"The Runs of "<<p2->name<<" in a Test Match is "<<p2->getRuns()<<endl;
    
    
    //accessing member using copy constructor
    p3.setRuns(8000);
    cout<<"The Runs of "<<p3.name<<" in a T20 Match is "<<p3.getRuns();


    return 0;
}

