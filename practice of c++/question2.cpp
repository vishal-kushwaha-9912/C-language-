// Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the
// rounded new price using explicit casting.

#include <iostream>
using namespace std;
int main()
{
    float basicpriceofTea = 30.00;
    ;
    cout << "the price of the basictea is:  " << basicpriceofTea << endl;

    int priceincreased = basicpriceofTea + (basicpriceofTea * 0.10);
    cout << "price after the 10% increase is :" << priceincreased;

    int roundedprice = (int)priceincreased;
    cout << "\nthe rounded price of the tea is: " << roundedprice;

    return 0;
}