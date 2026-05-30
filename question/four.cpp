// Skip Multiples of 3 🚫

// Problem

// Print numbers from 1 to 30.

// Skip numbers divisible by 3 using continue.
// Print all other numbers.

#include <iostream>
using namespace std;
int main()
{
    
    for (int i = 1; i <= 30; i++)
    {
       
        if (i % 3 == 0)
        {
        
            continue;
        }
     
        cout << i << endl; 
    }

    return 0;
}