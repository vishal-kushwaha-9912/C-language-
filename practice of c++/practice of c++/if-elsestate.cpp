#include<iostream>
#include<string>
using namespace std;

int main(){
   

    int time;
    cout<<"the open time of the shop is :(0-24)"<<endl;
    cin>>time;

    if(time >= 8 && time <= 12){
     
        cout<<"the shop is open  "<<endl;
           
    }
    else{
        cout<<"the shop is closed";
    }
    
    return 0;
}