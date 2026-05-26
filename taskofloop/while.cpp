#include<iostream>
using namespace std;
int main(){

    int cups;
    cout<<"enter the number of tea cups :"<<endl;
    cin>>cups;

//while loop  : is used to repeat a block of code as long as a specified condition is true. 


    while (cups>0)
    {
         cups --;  // cups -=1;
      cout<<"served  the cups of tea \n"<<cups << "remaining cups "<<endl;

    }
    
 cout<<"All cups of tea are served"<<endl;

 cout<<"thanks for your order"<<endl;

return 0;

}
