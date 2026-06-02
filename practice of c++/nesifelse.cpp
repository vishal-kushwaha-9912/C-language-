#include <iostream>
using namespace std;
int main()
{

    int order;

    cout << "please enter the order number of tea cups : " << endl;
    cin >> order;

    float price = 10.00;
    float totalamount = price * order;

    // if (order > 20)
    // {
    //     cout << "you get a special discount of 20% ." << endl;

    //     // int totalbill =  totalamount -(totalamount *0.20);
    //     totalamount -= (totalamount * 0.20);
    //     cout << "your total bill is :" << totalamount << endl;
    // }
    // else if (order >= 10 && order <= 20)
    // {
    //     cout << "you get a special discount of 10% . " << endl;
    //     totalamount -= (totalamount * 0.10);

    //     cout << "your total bill is :" << totalamount << endl;
    // }

    // else
    // {
    //     cout << "sorry you have no discount ." << endl;
    //     cout << "your total bill is :" << totalamount << endl;
    // }

    if(order >= 10){
        if(order > 20){
            cout << "you get a special discount of 20% ." << endl;
            totalamount -= (totalamount*0.20);
            cout<<"your toatal bill is :"<<totalamount<<endl;

        }

        else{
             cout << "you get a special discount of 10% ." << endl;
            totalamount -= (totalamount*0.10);
            cout<<"your toatal bill is :"<<totalamount<<endl;
        }
    }
    else{
        cout<<"SORRY you have no special discount ."<<endl;
        cout<<"your toatal bill is :"<<totalamount<<endl;
    }
   


    return 0;
}