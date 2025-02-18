#include <iostream>
using namespace std;
int main()

// intilization of array 
{
    // 1st method 
    int array[5]={34,33,44,66,77};

    // 2nd method 
    int name[]={90,88,89,78};               //it allocate 4 boxes itself or location 

    // 3rd method 
    int array1[10];                          //Get the array from the users 
    for(int i=0;i<10;i++)
    {
        cin>>array1[i];
    }

    // 4th method 
    int a[5]={34,56} ;                       //Garbage value will be stored at remaining three position 

    // 5th method 
    int a[5]={0} ;                           //0 will in all the boxes or adress 

}

// Array: It store same type of data type 
         // It store at contigeous location
        //  dlfkmldkfld 

