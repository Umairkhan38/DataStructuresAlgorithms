#include <bits/stdc++.h> 
using namespace std;

int countDistinctWays(int nStairs) {
    
    //Base case  
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }

    int ways=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ways;

}

int main(){
    int stairs=3;
    cout<<"there are "<<countDistinctWays(stairs)<<" distinct ways to climb on "<<stairs<<" no of stairs"<<endl;

}