#include <iostream>
using namespace std;
int main()
{
    int array[6]={56,78,23,45,67,78};
    int i=0,j=5;
    while (i<j)
    {
        swap(array[i],array[j]);
        i++;
        j--;
    }
    for(int k=0;k<6;k++)
    {
        cout<<array[k] <<"\n";
    }
    return 0;
}