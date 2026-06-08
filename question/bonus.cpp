// Bonus Challenge ⭐

// Create a menu using switch:

// . Square of a number
// 2. Cube of a number
// 3. Count digits
// 4. Reverse number
// 5. Exit1

// Use a switch statement to perform the selected operation.

#include <iostream>
using namespace std;
int main()
{
int types;
    cout << "TYPES OF METHODS : " << endl;
    cout << "1 Square of a number: " << endl;
    cout << "2. Cube of a number: " << endl;
    cout << "3. Count digits: " << endl;
    cout << "4. Reverse number: " << endl;
    cout << "5. Exit " << endl;
    cout << "Enter you types number :" << endl;
    cin>>types;

    int num;
    cout << "enter the number " ;
    cin>>num;
    

    switch (types)
    {
    case 1:
    {
        int sq = num * num;
        cout << "the  Square of the number is :" << sq << endl;

        break;
    }
    case 2:
    {
        int cube = num * num * num;
        ;
        cout << "the  cube of the number is :" << cube << endl;

        break;
    }
    case 3:
    {
        int count;

        break;
    }
    case 4:
    {
        int sq = num * num;
        cout << "the  Square of the number is :" << endl;

        break;
    }
    default:
    {
        cout << "enter any valid number type" << endl;

        break;
    }
    }
    return 0;
}