// write the code that takes input from the users age 
// and print if your age is adult

#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age :";
    cin>>age;
    if (age >= 18)
    {
        cout<<"your are an adult ";
    }
    else
    {
        cout<<"you are not an  adult yet";
    }
    return 0;
}
