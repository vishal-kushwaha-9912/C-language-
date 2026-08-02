/*
Take the day no and print the corresponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"MONDAY";
        break;
    case 2:
        cout<<"TUESDAY";
        break;
    case 3:
        cout<<"WEDNESDAY";
        break;
    case 4:
        cout<<"THURSDAY";
        break;
    case 5:
        cout<<"FRIDAY";
        break;
    case 6:
        cout<<"SATURDAY";
        break;
     case 7:
        cout<<"SUNDAY";
        break;
    default:
        cout<<"INVALID CHECK AGAIN !";
        break;
    }
}