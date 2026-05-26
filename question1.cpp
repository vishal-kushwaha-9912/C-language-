// Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use
// data types effectively and print them in a formatted output using escape sequences.

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string typeofTEA;
    cout << "what is your type of tea you want " << endl;
    cin >> typeofTEA;

    float teapriceperKilogram;
    cout << "what the price of the tea perkilogram is: " << endl;
    cin >> teapriceperKilogram;

    char rating;
    cout << "Enter customer rating (A/B/C): ";
    cin >> rating;

    //  using escape sequences
    cout << "\n\t--- Tea Information ---\n";

    cout << "Tea Type\t\t: " << typeofTEA << endl;

    cout << "Price Per Kilogram\t: " << teapriceperKilogram << endl;

    cout << "Customer Rating\t\t: " << rating << endl;

    return 0;
}