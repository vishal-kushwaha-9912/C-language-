// Tea Shop Discount Calculator ☕

// Problem

// A tea shop sells tea for ₹10 per cup.

// Take the number of cups from the user.
// If the customer buys more than 20 cups, give a 20% discount.
// Print the final bill amount.

#include <iostream>
using namespace std;
int main()
{

    int percup = 10;

    int cups;
    cout << "Enter the number of tea cups :" << endl;
    cin >> cups;

    int totalbill;

    totalbill = cups*percup;
  


    if (cups > 20)
    {
        cout << "you get a special discount on your order" << endl;
        int  finaltotalbill = totalbill - ( totalbill*0.20);
        cout<<"your total bill is :"<<finaltotalbill;

    }
    else{
        cout<<"sorry you have no special discount"<<endl;

    }
      cout<<"your total bill is "<<totalbill<<endl;


    return 0;
}
