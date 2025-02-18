// sum of array (usiing friend function )

#include <iostream>
using namespace std;

// class making 
class array
{
    private:
    int arr;
    int size;
    public:
    array(int arr[],int size)
    {
        cout <<"Enter the size of array :";
        cin >> size;
        for (int i = 0; i < size ; i++)
        {
            cout <<"Enter the element of array:"<<endl;
            cin >>arr[i];
        }
        for (int i = 0; i < size ; i++)
        {
            cout <<"Enter the element of array:"<<endl;
            cout<<arr[i];
        } 
    
    }
    
    
};

int main()
{
    int a[5];
    array a1(a,5);
    return 0;
}