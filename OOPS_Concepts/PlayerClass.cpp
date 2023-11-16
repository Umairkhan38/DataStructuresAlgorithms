#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
    int run;   

    public:
    string name;

    
     Player(int run,string name){
        this->run=run;
        this->name=name;
     }   


    Player(Player& p3){     //copy constructor using refernce var not by value
        this->run=p3.run;
        this->name=p3.name;
    }


    void setRuns(int run){
        this->run=run;     //storing a value of run from method to class 
    }


    int getRuns(){
        return this->run;
    }

};

