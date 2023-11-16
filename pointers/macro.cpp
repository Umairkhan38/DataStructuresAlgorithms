#include<iostream>
#define Area(l,b) (l*b) //created a macro to find area of rectangle
#define min(a, b) (((a) < (b)) ? (a) : (b))
using namespace std;

// A macro is a piece of code in a program that is replaced by the value of the macro.
// Macro is defined by #define directive. Whenever a macro name is encountered by the compiler, 
// it replaces the name with the definition of the macro. Macro definitions need not be 
// terminated by a semi-colon(;)
int main(){

int l=6,b=3;
int area=Area(l,b);
cout<<"the area of reactangle is : "<<area<<endl;
cout<<"the min value is : "<<min(l,b);
return 0;
}
