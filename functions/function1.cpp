// FUNCTION :

// A function is a block of code that does a specific task.
// First we define the function by writing what it should do, then we call the function whenever we want to execute that task.



//  Two Main Parts

// 1. Function Definition

// This is where we write what the function does.

// void sayHello()
// {
//     cout << "Hello!" << endl;
// }

// 2. Function Call

// This is where we tell the computer to run the function.

// sayHello();



//                                                     CODE

#include <iostream>
using namespace std;

void sayHello() // Function definition
{
    cout << "Hello!" << endl;
}

int main()
{
    sayHello(); // Function call
    return 0;
}
