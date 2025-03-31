#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    // this is opening the file and writting the file in append mode 
    // if the file does not exist, it will be created.
    // if it exists, the data will be appended to the end of the
    file.open("sample.txt",ios::app);
    if (!file.is_open())
    {
        cout<<"Error opening file"<<endl;
        return 1;
    }

    // writing to the file
    file <<" THe another sample is added to the file :" <<endl;
    
    cout<<"File opened successfully and data written!"<<endl;
    file.close(); // this will close the file after writing, if not closed, the file will remain open until the program is terminated
    
    return 0;
}