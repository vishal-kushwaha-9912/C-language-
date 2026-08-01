
/* A school has following rules for grading system:
a. Below.26T -F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    float marks;
    cout<<"Enter the marks of the student :";
    cin>>marks;
    if (marks  < 25){
        cout<<" your grade id : F";
    } 
    else if(marks <= 44){
        cout<<" your grade id : E";
    }
   else if( marks <= 49)
   {
        cout<<" your grade id : D";
    }
   else if( marks <= 59)
   {
        cout<<" your grade id : C";
    }
   else if(  marks <= 79)
   {
        cout<<" your grade id : B";
    }
    else if( marks <= 100)
    {
        cout<<" your grade id : A";
    }
    else 
    {
        cout<<"these is not declared ";
    }

    return 0;
}


/*
Take the age from the user and then decide accordingly
1. If age < 18,
print-> not eligible for job
2. If age >= 18,
print-> "eligble for job"
3. If age >= 55 and age <= 57,
print-> "eligible for job, but retirement soon."
4. If age > 57
print-> "retirement time"
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int age ;
    cout<<"Enter your current age :";
    cin>>age;
    if (age <18)
    {
    cout <<"not  eligibile for the job ";
    }
    else if (age<=54){
        cout <<"Eligible for job";
    }
    else if (age<=57)
    
        cout<<"eligible for job ";
        if (age >=57)
   {
    cout <<"Retirement time";
   } 
   else
   {
    cout<<"its not define ";
   }
}