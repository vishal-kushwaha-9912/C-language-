
// Find the Largest of Three Numbers 🔢

// Problem

// Take three integers from the user and print the largest number.

#include <iostream>
using namespace std;
int main()
{

    int num1;
    cout << "enter first integer : " << endl;
    cin >> num1;

    int num2;
    cout << "enter second integer : " << endl;
    cin >> num2;

    int num3;
    cout << "enter third integer : " << endl;
    cin >> num3;

    if(num1 >num2){
        cout<<"num 1 is largest number "<<num1<<endl;

    }
    else if(num2 >num3){
        cout<<"num 2 is largest number "<<num2<<endl;
    }

 else if(num3 >num1){
        cout<<"The  largest number is : "<<num3<<endl;
    }
    else{
        cout<<" there is not largest number "<<endl;
    }


    return 0;
}