

// Question 1: Basic Function Definition (Beginner)
// Write a function called greet() that takes a person's name as a parameter (string) 
// and prints a greeting message like "Hello, [name]!" without returning anything.
// Call this function with 3 different names.

//ANSWER

// #include<iostream>
// using namespace std;
// void greet(string name){                             //A void function returns nothing.
//     cout<<"Hello "<<name<<endl;

// }

// int main(){
//     greet("vishal");
//     greet("nitesh");
//     greet("anmol");
//     return 0;
// }



// Question 2: Function with Return Value (Beginner)
// Write a function called add() that takes two integers as parameters and returns their sum. 
//Then create a main program that calls this function and displays the result

#include<iostream>
using namespace std;

int add (int num1,int num2){
 return num1+num2;
}

int main(){  //functioon call
   int result =add(3,2);

   cout<<"the sum  : "<<result<<endl;
   return 0;

    return 0;
}