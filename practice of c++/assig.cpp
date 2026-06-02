#include<iostream>
using namespace std;
int main(){
    int teabags;
    cout<<"how much number of tea bags you have :"<<endl;
    cin>>teabags;

     if(teabags<10){
        teabags+=5;
        cout<<"the total number of tea bags is:"<<teabags<<endl;
        cout <<"you got 5 extra  tea bags"<<endl;
     }
     else{
        cout<<"you have no extra tea bags"<<endl;
     }

return 0;
}