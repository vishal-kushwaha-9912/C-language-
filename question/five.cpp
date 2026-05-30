// Secret Number Game 🎯

// Problem

// The secret number is 7.

// Ask the user to guess the number.
// Keep asking until they guess correctly.
// Use a loop.
// If guessed correctly, print a congratulation message and stop using break.
#include <iostream>
using namespace std;
int main()
{
    int num = 7;
    do
    {
        cout << " guess the number" << endl;
        cin >> num;
    } while (num != 7);
    {
        cout << "congratulation  you  guess the number";
    }
    cout << "try again ";

    return 0;
}