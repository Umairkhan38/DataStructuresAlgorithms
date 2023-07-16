#include<iostream>
using namespace std;

// int main()
// {
// int n=4,i=0;

// for(int i=0;i<n;i++){
//     int space=n-i-1;
//     while(space){
//         cout<<"  ";
//         space--;
//     }
    
//     int star=0;
//     while(star<=i){
//         cout<<" *";
//         star++;
//     }

//     cout<<endl;
//     // i++;
// }

// return 0;
// }



int main()
{
 int n = 5;
 int i=0;
        while(i<n){
            
            int space=0;
            while(space<=i){
                cout<<" ";
                space--;
            }
            
            int star=n-i;
            while(star){
                cout<<"* ";
                star--;
            }
            cout<<endl;
            i++;
            
        }
    return 0;
}
