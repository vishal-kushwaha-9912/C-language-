// Password Checker

// Problem

// The correct password is:

// 1234

// Give the user 3 attempts to enter the password.

// If correct → print "Access Granted"
// If all attempts fail → print "Access Denied"

#include <iostream>
using namespace std;
int main()
{
    // CORRECT ANSWER BUT NOT GOOD CODE
    // int pass = 1234;

    // for (int i = 0; i <3; i++)
    // {
    //      cout<<"enter password: "<<endl;
    //      cin>>pass;

    //     if (pass == 1234)
    //     {
    //         cout << "Access Granted" << endl;
    //         break;
    //     }

    //     else
    //     {
    //         cout << "wrong password " << endl;

    //     }
    //     if(i==2){
    //         cout<<"access denied"<<endl;
    //     }
    // }

                                                         // BETTER CODE

    int correctpassword = 1234;
    int userpassword;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter your  password: " << endl;
        cin >> userpassword;

        if (userpassword == correctpassword)
        {
            cout << "Access Granted" << endl;
            break;
        }

        else
        {
            cout << "wrong password   " << endl;
        }
        if (i == 2)
        {
            cout << "access denied" << endl;
        }
    }
    return 0;
}

// if you write the same code in to d/f style but with better variable names and better structure of the code it will be more readable and easy to understand for another person who read it .

// code is important but you try to improve it by using better variable names and better structure of the code.
//  looking good to if another person read it .


