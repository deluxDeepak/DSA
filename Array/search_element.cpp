#include <iostream>
using namespace std;
int main()
{
    int array[]={56,78,23,45,67,78};
    // searching t 56 from the array 

    int index=-1;
    for(int i=0;i<6;i++)
    {
        if(array[i]==67)
        {
            index=i;
            break;
        }
    }
    cout<<" matched at Index= "<<index <<endl;
}