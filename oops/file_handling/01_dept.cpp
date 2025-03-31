#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // ways to open a file
    //  {
    //      1.using the constructor
    //      2.using member fucntion open() of the class
    //  }
    //  1. using file stream object
    //  2. using file name
    //  3. using file path
    //  4. using file descriptor

    // 1. using file stream object
    // ofstream file("sample.txt");

    // 2. using file name
    // ofstream file("sample.txt");

    // 3. using file path
    // ofstream file("C:/Users/user/Desktop/sample.txt");


    // opening file using constructor and writting it
    string st="DEEpak kumar";
    ofstream file("sample.txt");
    if (!file)
    {
        cout << "Error in opening the file :" << endl;
        return 1;
    }
    // writing in the file 
    file << st;

    cout << "File opened successfully :" << endl;
    file.close(); // closing the file


    // opening file using constructor and reading to it 
    ifstream file1("sample.txt");
    if (!file1)
    {
        cout << "Error in opening the file :" << endl;
        return 1;
    }
    string line;
    // reading the file text (spaces and new line nahi ayega )
    // file1>>line;
    getline(file1, line);
    // reading the file text (spaces and new line ayega )

    cout << "Reading the file :" << line << endl;

    file1.close(); // closing the file

    return 0;
}