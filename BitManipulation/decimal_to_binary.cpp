#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;


int firstApproach(int n){

int ans=0;
int i=0;


while(n!=0){
int bit = n&1;
    ans=(bit*pow(10,i))+ans;
    n>>=1; 
    i++;

};

return ans;
}



//approach without using math library

int withoutMath(int n){
    int base=1,ans=0;
    while(n!=0){
    int bit=n&1;
    ans+=bit*base;
    base*=10;
      n>>=1;  
    }
    cout<< ans;
}






//String Method

string secondApproach(int n){
    string ans;
   
    while(n!=0){
        if(n&1){
        ans+='1';
        }else{
            ans+='0';
        }
        n>>=1;
    };

    int i=0,j=ans.length()-1;

    while(i<= j){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }

    return ans;
}



int main()
{
int n;
cout<<"Enter the Decimal Number"<<endl;
cin>>n;
// cout<<firstApproach(n);
// cout<<secondApproach(n);
withoutMath(n);
return 0;
}
