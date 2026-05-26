#include<iostream>
using namespace std;
int main(){

int cups;
cout<<"enter the number of tea cups :"<<endl;
cin>>cups;

cout<<"your " <<cups<< " tea cups are ready"<<endl;

string order;
do{
    cout<<"do you want to order more tea cups(yes/no)"<<endl;
    cin>>order;

}
while(  order != "no" && order != "NO"   );
{
    cout<<"thanks for your order"<<endl;
}

return 0;

}