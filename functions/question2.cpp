

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



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// Question 2: Function with Return Value (Beginner)
// Write a function called add() that takes two integers as parameters and returns their sum. 
//Then create a main program that calls this function and displays the result


//ANSWER


// #include<iostream>
// using namespace std;

// int add (int num1,int num2){
//  return num1+num2;
// }

// int main(){  //functioon call
//    int result =add(3,2);

//    cout<<"the sum  : "<<result<<endl;
//    return 0;

// }



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// Question 3: Multiple Parameters and Return (Intermediate)
// Write a function called calculateAverage() that takes three numbers as parameters and returns their average.
 //Test it with different values and display the results.

 #include<iostream>
 using namespace std;

double calculateAverage(int num1,int num2,int num3){
    return (num1+num2+num3)/3.0;

 }
int main(){
    double average =calculateAverage(0,9,11);

cout<<"the average is :"<<average<<endl;

    return 0;
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// Question 4:   Function with Local Variables (Intermediate)


// Write a function called countVowels() that takes a string as parameter 
// and returns the count of vowels (a, e, i, o, u) in that string. Then use it to count vowels in at least 2 different sentences.


//ANSWER :
// // 
// #include<iostream>
// using namespace std;
// countVowels(string){
    
// }