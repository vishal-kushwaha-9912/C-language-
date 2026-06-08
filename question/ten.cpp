// Reverse a Number
// Problem

// Take a number and reverse it.

#include <iostream>
using namespace std;
int main()
{

    int rev;
    int count;
    int digit;
    int num;
    cout << "Enter the number you want to reverse it : " << endl;
    cin >> num;

    while (num != 0)
    {
        num = num / 10;
        count++;

        cout << "" << count;
    }

    while (num != 0)
    {

        int power =10*count;

        num = num/power;
        digit = num % 10;
        rev = rev * 10 + digit;
        cout << "Reversed number is: " << rev << endl;
    }

    return 0;
}
