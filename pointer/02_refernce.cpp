#include <iostream>
using namespace std;
int main()
{

    // refernce varible (It becomes alternating name for existing variable )
    int y=20;
    int &z=y;
    y=45;
    cout<<"Value of y before change :" <<y;
    cout<<"Value of y afeter change :" <<z;

}