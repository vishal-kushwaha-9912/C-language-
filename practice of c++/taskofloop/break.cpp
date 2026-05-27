#include <iostream>
#include <string>
using namespace std;
int main()
{

    string cups;

    while (true)
    {
        cout << "do you want more tea if not enter('stop')" << endl;
      cin>>cups;  // getline(cin, cups);

        if (cups == "stop")
        {
            break;
        }
    cout << "pouring more tea..." << endl;
    }
    cout << "no more tea for you" << endl;

    return 0;
}