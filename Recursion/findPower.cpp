#include<iostream>
using namespace std;

int power(int a, int b){

    //base case
    if(b==0){
        return 1;
    }

    if(b==1)
        return a;


    //recursive call
    int ans=power(a,b/2);
    
    if(b & 1){ //if b is odd 

        return a*ans*ans;
    
    }else{
    
        return ans*ans;
    }

}


int main()
{

int a=5,b=4;
cout<<"the a to the power b is "<<power(a,b); 

return 0;
}

