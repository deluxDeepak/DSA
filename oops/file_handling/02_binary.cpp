#include <iostream>
#include <fstream>
using namespace std;

struct person
{
    char name[50];
    int age;
};

int main()
{
    // opeen the binary file for reading 

    ifstream file("data.bin",ios::binary);
    if (!file)
    {
        cout <<"Error in opening :" <<endl;
    }
    person p;

    // to read the binary data 
    file.read(reinterpret_cast<char*>(&p),sizeof(p));

    // to close the file 
    file.close();
    cout <<"NAME :" <<p.name;
    

    return 0;
}