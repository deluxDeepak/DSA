#include <iostream>
using namespace std;
int main()
{
    int array[6]={56,78,23,45,67,78};
    int temp[6];
    int i=5,j=0;
    while (i>=0)
    {
        temp[j]=array[i];
        i--;
        j++;
    }
    for(int k=0;k<6;k++)
    {
        cout<<temp[k] <<"\n";
    }
    return 0;
}