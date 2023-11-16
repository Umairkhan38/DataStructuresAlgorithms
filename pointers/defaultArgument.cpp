#include<iostream>
using namespace std;

// A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. In case any value is passed, the default value is overridden. 
// A function with default arguments,
// it can be called with
// 2 arguments or 3 arguments or 4 arguments.

int sum(int x, int y, int z = 0, int w = 0) //assigning default values to z,w as 0
{
	return (x + y + z + w);
}


int main()
{   //here below in function call the missing parameter would be considered as per the default value from       the function declaration
	cout << sum(10, 15) << endl;
	cout << sum(10, 15, 25) << endl;
	cout << sum(10, 15, 25, 30) << endl;

    return 0;
}


