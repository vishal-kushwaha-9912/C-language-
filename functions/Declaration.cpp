// Question 1 ⭐ (Identify the Declaration)

// In the code below, find the function declaration:

// void greet();

// void greet()
// {
//     cout << "Hello";
// }

// int main()
// {
//     greet();
// }


// ANSWER ::: >> void greet();



///>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Question 2 ⭐⭐ (Write a Declaration)

// A function named add:

// returns an int
// takes two integers as parameters

// 👉 Write only the function declaration.

// #include<iostream>
// using namespace std;

// int add(int num1, int num2);



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// Question 5 ⭐⭐⭐⭐ (Write Complete Code)
// Create:

// A function declaration for multiply()

// A function definition for multiply()

// A function call inside main()

// Requirements:

// Takes two integers

// Returns their product

// Example:

// 3 × 4 = 12

#include<iostream>
using namespace std;

 int multiply(int num1, int num2);      //   A function declaration

int multiply(int num1, int num2){        // function definition

    return num1*num2;
}

int main(){
   int total= multiply(3,4) ;                //  function call

    cout<<"there product is :"<<total<<endl;

    return 0;
}