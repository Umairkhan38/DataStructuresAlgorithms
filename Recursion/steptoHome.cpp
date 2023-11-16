#include<iostream>
using namespace std;

void stepHome(int src, int dest){

cout<<"src is : "<<src<<endl;
//base case
if(src==dest){
    cout<<"reached to destination"<<endl;
    return ;
}

src++;
stepHome(src,dest);

}

int main()
{
int src=1,destination=10;
stepHome(src,destination);

return 0;
}
