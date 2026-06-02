#include<iostream>
#include<string>
using namespace std;
int main(){

    string ordertea;
    cout<< " what type of tea you want "<<endl;
             
   getline(cin, ordertea);     // to take the input of string with space

     if ( ordertea == "green tea"){
       
        cout<<"your Green tea oder is confirm"<<endl;  

    }
   

    return 0;

}