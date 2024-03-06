#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/


/*You are required to complete this method*/
class Solution{
  public:
    int tour(petrolPump p[],int n)
    {
       int start = 0;
       int balance = 0;
       int deficit = 0;
       
       for(int i = 0 ; i<n; i++){
            
            balance += p[i].petrol - p[i].distance ;
            if(balance < 0){
                deficit += balance;
                start = i+1;
                balance = 0;
            }
       }
       
       if(deficit + balance >= 0){
            return start;
       }
       else{
           return -1;
       }
       
    }
};



int main()
{
 cout<<"Enter a size of array"<<endl;
        int n;
        cin>>n;
        cout<<"Enter the pertol and distance "<<endl;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
}

