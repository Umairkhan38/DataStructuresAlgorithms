#include<iostream>
using namespace std;

int findSquareRoot(int n){

      int l=0, r=n;int mid=l+(r-l)/2,ans=-1;
        while (l<=r)
        {
                if(mid*mid==n){
                      ans= mid;
                }else if(mid*mid<n){
                    ans=mid;
                    l=mid+1;
                }else{
                    r=mid-1;
                }
                mid=l+(r-l)/2;
        }
        return ans;
}


double perfectSquareRoot(int n, int precesion, int tempSol){
    double factor=1;
    double ans=tempSol;
    for(double i=0;i<precesion;i++){
        factor/=10;
       for(double j=ans; j*j<n;j+=factor){
            ans=j;
       } 
    }
    return ans;

}



int main()
{
    int n;
    cout<<"Enter the Number to find the square root"<<endl;
    cin>>n;
    int tempSol=findSquareRoot(n);
    cout<<"Square Root of n is "<<findSquareRoot(n)<<endl;
    cout<<"Precise Square Root of n is "<<perfectSquareRoot(n,3,tempSol);

return 0;
}