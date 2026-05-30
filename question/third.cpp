// Multiplication Table Generator 📚

// Problem

// Take a number from the user and print its multiplication table up to 10.

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number of the table you want :" << endl;
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        int finalnum = num * i;
        cout << finalnum << endl;
    }

    return 0;
}