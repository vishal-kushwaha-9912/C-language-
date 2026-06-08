// Count Digits in a Number

// Problem

// Take an integer from the user and count how many digits it contains.

#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int num;
    cout<<"Enter the number that you want to count the digits of: "<<endl;
    cin>>num;

    while (num!=0)  // we will keep dividing the number by 10 until it becomes 0, and count how many times we can do this
    {
        num=num/10; // this will remove the last digit of the number, and we will keep doing this until the number becomes 0
        count++;
    }
    cout<<"The number of digits in the given number is: "<<count<<endl;
    

    return 0;
}