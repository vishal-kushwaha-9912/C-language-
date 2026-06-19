//"""" Question 1""": Print a Message

// Create a function named welcome() that prints:

// Welcome to C++ Programming

// Call the function from main().

// #include<iostream>
// using namespace std;
// void welcome(){    //Function Definition

//     cout<<"welcome to c++ programming"<<endl;

//     }

//     int main(){

//         welcome();  //Function call
//         return 0;
//     }



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// Question 2: Print Your Name

// Create a function named myName() that prints your name.

// Example output:

// My name is Vishal

// Call the function once.

// #include<iostream>
// using namespace std;

// void myname(){
//     cout<<"my name is vishal"<<endl;
// }

// int main(){

//     myname();
//     return 0;

// }


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// Question 3: Call a Function Multiple Times

// Create a function named tea() that prints:

// Tea is ready!

// Call the function 3 times from main().


// answer

// #include <iostream>
// using namespace std;
// void tea()
// {
//     cout << "Tea is ready " << endl;
// }

// int main()
// {
//     tea();
//     tea();
//     tea();
//     return 0;
// }

// OR


// #include <iostream>
// using namespace std;
// void tea()
// {
//     cout << "Tea is ready " << endl;
// }

// int main(){
//     for(int i=1; i<4; i++){
//         tea();
//     }
   
    
//     return 0;
// }



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// Question 4: Function with One Parameter

// Create a function named greet() that takes a name and prints:

// Hello Vishal

#include<iostream>
using namespace std;

void greet(string name){      //string name   >>This is called a parameter.
    cout<<" Hello "<<name<<endl;

}

int main(){
    greet("vishal");             // greet("vishal");>>>  the value "Vishal" goes into name.
    return 0;
}