// FizzBuzz

// Print numbers from 1 to 50:

// If divisible by 3 → print "Fizz"
// If divisible by 5 → print "Buzz"
// If divisible by both → print "FizzBuzz"
// Otherwise print the number.
#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 50; i++)
    {

        if (i % 3 == 0)
        {

            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }

        else if (i % 5 == 0 && i % 3 == 0)
        {
            cout << "fizzBuzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}