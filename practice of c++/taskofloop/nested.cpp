#include <iostream>
#include<string>
using namespace std;
int main()
{
    

string teatype[4] ={"orange tea" , "green tea", "black tea", "oolong tea"};

for(int i=0; i<4; i++){
cout<<"brewing the tea "<<teatype[i] <<endl;
   for(int j= 0; j<3; j++){
    cout<<"breing the tea "<<teatype[i]<<"....."<<endl;

   }
}
    return 0;
}