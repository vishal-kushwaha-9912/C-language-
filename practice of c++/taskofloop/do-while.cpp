#include <iostream>
using namespace std;
int main()
{

    int cups;
    cout << "enter the number of tea cups :" << endl;
    cin >> cups;
    string order;

    do
    {
        cout << "pouring more tea.... (if buying enter 'yes' and not 'no')" << endl;
        cin >> order;

    } while (order != "no" && order != "NO");
    {
        cout << "sorry you have no order of tea  " << endl;
    }

    return 0;
}
//                                                **  NOTE ** 

// if you write this 
//  while (order == "no" || order == "NO"); this is wrong its give you ''YES and NO'' both if the user enter the yes or no any one option.
// 