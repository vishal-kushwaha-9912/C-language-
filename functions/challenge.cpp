// main()
//  └── doA()
//       └── doB()

// main()
//  └── doB()
// can you write the exact output of this program line by line?

#include <iostream>
using namespace std;

void doB()
{
    
cout<< "doB()"<<endl;

}
void doA()
{
    cout<<"doA()"<<endl;
    doB();
}


int main()
{
cout<<"Starting main()"<<endl;
    doA();
    doB();

cout<<"Ending main()"<<endl;

    return 0;
}