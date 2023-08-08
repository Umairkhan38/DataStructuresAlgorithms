#include<iostream>
using namespace std;

//Gcd algorithm is used to find a highest common factor
//means it will return a maximum number throught which both the numbers can be divided completely

int gcd(int a,int b){
    if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
             b=b-a;   
        }
    }
    return a;

}

int main(){
    int a=72,b=24;
    cout<<"the gcd of the given number is "<<gcd(a,b);

    return 0;
}