#include <iostream>
#include<string>
using namespace std;
int main()
{
    

string teatype[4] ={"orange tea" , "green tea", "black tea", "oolong tea"};

for(int i=0; i<4; i++){
    if (teatype [i] =="green tea"){
        cout<<"skipping The "<<teatype[i]<<endl;
continue;
    }
    cout<<"browing The tea  "<<teatype[i]<<endl;
}
    
    return 0;
}