#include<iostream>
using namespace std;
int main(){

    int teatypes;
    cout<<"       TEA MENU    "<<endl<<endl;
     cout<<"1.green tea "<<endl;
     cout<<"2.black tea "<<endl;
     cout<<"3.oolong tea "<<endl;
     cout<<"4.sugarfree tea "<<endl;
     cout<<"enter your tea type :"<<endl;
     cin>>teatypes;


     float price;


    switch(teatypes){
        case 1:
             price = 2.00;
            cout<<"you select a GREEN TEA price is $:"<<price<<endl;
            
            break;
        
        case 2:
             price = 3.00;
            cout<<"you select a BLACK TEA price is $:"<<price<<endl;
            
            break;
        
        case 3:
             price = 4.00;
            cout<<"you select a OOLONG TEA price is $:"<<price<<endl;
            
            break;
        
        case 4:
            price = 1.00;
            cout<<"you select a SUGARFREE TEA  price is :$"<<price<<endl;
             
            break;
        

        default :
            cout<<"invalid item"<<endl;
            break;
        
    }

    
    return 0;

}