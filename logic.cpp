// Challenge: Create a program that checks if a user is eligible for a tea subscription discount. 
// The discount applies if the user is either a student or has purchased more than 15 cups.
//  Ask the user to input their status (student or not) and their cup count.
 
#include<iostream>
using namespace std;
int main(){

bool student;
 cout<<"are you a student ?(1 for yes and 0 for no )"<<endl;
 cin>>student;


 int cups;
 cout<<"how many tea cups do you want  ? :"<<endl;
 cin>> cups;

 float pricepercup = 10.00;

 
 float bill ;
bill = pricepercup*cups;
 cout<<"your amount of tea cups is : "<<bill<<endl;


 // discount condition :

 if( student  || cups>15 ){
    cout<<"you get a special discount  of 5%"<<endl;
    float totalamount = bill -(bill*0.05) ;

    cout<<" your total bill is  :"<<totalamount<<endl;

    
 }
else{
    cout<<" sorry you have no special discount  "<<endl;
    cout<<"your total bill is :"<<bill<<endl;

}

 return 0;

}