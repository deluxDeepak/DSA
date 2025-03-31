#include <iostream>
#include <fstream>              //file handling libraray 
// contains three classes 

using namespace std;
int main()
{
    // ifstream base class se derived hota hai 
    // ifstream object ko file ko open karna hai 
    // file ko open karni hai uske liye filestream object ko use karna hai 

    // ofstream base class se derived hota hai 
    // ofstream object ko file ko open karna hai
    
    // ofstream is used to create a new file or open an existing one for writing operations.
    // open file in write mode 

    // opening the file in append mode 
    // yaahn constructor use hua hai

    // ios::app - open the file for appending (writing data to the end of the file)
    // ios::out - open the file for writing (overwrite the existing file if it exists)
    // ios::in - open the file for reading (default mode)
    // ios::trunc - open the file for writing and truncate it if it already exists
    // ios::binary - open the file in binary mode (for reading or writing binary data)
    // ios::ate - open the file at the end of the file (for appending)
    // ios::nocreate - open the file if it doesn't exist, otherwise fail to open
    // ios::noreplace - open the file if it doesn't exist, otherwise truncate the existing file
    // ios::sync - flush the file buffers after each write operation
    // ios::unitbuf - flush the file buffers after each output operation
    // ios::seekp - set the initial position for output operations 

    ofstream file("01_write.txt",ios::app);
    if (!file)
    {
        cout <<" Error in the opening :" <<endl;
        return 1;
    }
    file <<"Important file operation :"<<endl;
    // writing to the file 
    file <<"changed ";

    // file ko close karna chiye hamesha 
    cout <<" Data changed successfullly :" <<endl;

    
    return 0;
}