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

    int correctpassword = 1234;
    int userpassword;

    for (int i = 1; i <= 3; i++)
    {

        cout << " Enter your password : " << endl;
        cin >> userpassword;

        if (correctpassword == userpassword)
        {
            cout << "Access Granted" << endl;
            return 0;
        }
    
    cout << "Wrong Password! Attempts left: " << 3 - i << endl;   // cout << " Access Denied";
 
    
       
    }
        return 0;
}