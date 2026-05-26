#include<iostream>
using namespace std;
int main (){
    
    int numofteacups;
    cout<<"enter the number of tea cups you BUY :"<<endl;
    cin>>numofteacups;

    if(numofteacups >20){
        cout<<"you get the special GOLD badge ";
        
    }
  else if (numofteacups >=10 && numofteacups <= 20){
    cout<<"you recive a  special SILVER badge ";
    }
    else{
        cout<<" SORRY you have no special badge";
    }
    
    
    return 0;


}