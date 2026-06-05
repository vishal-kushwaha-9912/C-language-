// write a code using The switch case :
// Create a calculator using switch.

#include <iostream>
using namespace std;
int main()
{

    int num1;
    cout << "Enter The first number : " << endl;
    cin >> num1;

    int num2;
    cout << "Enter The second number : " << endl;
    cin >> num2;

    int calcul;
    cout << " Types of  Arthmetic operator :" << endl;
    cout << "1. Adddition  " << endl;
    cout << "2. subtraction  " << endl;
    cout << "3. Multiplication  " << endl;
    cout << "4. Divison " << endl;
    cout << "5. Modulus " << endl;
    cout << " Enter The operator type : ";
    cin >> calcul;

    switch (calcul)
    {
    case 1:
    {
        int sum = num1 + num2;
        cout << "The sum of two number is : " << sum << endl;

        break;
    }
    case 2:
    {
        int sub = num1 - num2;
        cout << "The subtraction of two number is : " << sub << endl;

        break;
    }
    case 3:
    {
        int mul = num1 * num2;
        cout << "The multiplication of two number is : " << mul << endl;

        break;
    }
    case 4:
    {
        // int div = num1 / num2;
        // cout << "The Division  of two number is : " << div << endl;

        // break;

        if (num2 == 0)
        {
            cout << "Division by zero is not allowed." << endl;
        }

        else
        {
            double div = (double)num1/num2;
            cout << "The Division  of two number is : " << div << endl;
        }
        break;
    }
    case 5:
    {
        if (num2 == 0)
        {
            cout << "modulus by zero is not allowed." << endl;
        }

        else
        {
            int mod = num1 % num2;
            cout << "The modulus of two number is : " << mod << endl;
        }
        break;
    }

    default:
    {
        cout << "enter an valid values" << endl;

        break;
    }
    }
    return 0;
}