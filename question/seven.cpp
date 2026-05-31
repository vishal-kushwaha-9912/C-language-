// . Sum of Even Numbers

// Problem

// Take a number N from the user.

// Find the sum of all even numbers from 1 to N.

#include <iostream>
using namespace std;
int main()
{
    int num;
     int sum = 0; // to store the sum of even numbers
    cout << "Enter the last number of the even number sum you want:" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << endl;
       
        sum = sum + i; // adding the even number to the sum
    }
    cout << "Sum of even numbers from 1 to N : " << sum <<endl;
    return 0;
}