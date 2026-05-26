#include<iostream>
using namespace std;
int main(){
 
 int ordersofteacups;
cout<< " how many tea cup you want :"<<endl;
cin>>ordersofteacups;
 

float pricepercup ;
 cout <<"the price of the per cup of the tea is :"<<endl;
 cin>>pricepercup;

int toatalpriceofTEA;
toatalpriceofTEA = ordersofteacups*pricepercup;
 cout<<"the toatal price of the tea :"<<toatalpriceofTEA<<endl;

if(toatalpriceofTEA >=100){
    int discountprice;
    
   discountprice = toatalpriceofTEA - (toatalpriceofTEA *0.05);
cout<<"the price after the discount is :"<<discountprice;
}
else{
    cout<<"sorry you have no discount on tea price"<<endl;
}



return 0;

}
