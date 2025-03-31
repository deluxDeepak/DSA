#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    // data flow from the program to the text file 
    // connecting our file with file stream 

    ofstream file("sample1.txt");
    if (!file)
    {
        cout << "Error in opening the file :" << endl;
        return 1;
    }
    // writing to the file(cout ki traha kam karega )
    string name;
    cout <<"Enter your name : ";
    // cin >> name;
    getline(cin, name); // to get the whole line including spaces
    file<<"My name is :" +name<<endl;

    file.close();
    cout << "File opened successfully and data written!" << endl;

    // reading the file data 
    
    ifstream file1("sample1.txt");
    if (!file1)
    {
        cout <<"Error in opening the file :" << endl;
    }
    string line;
    // file1>>line;

    // It was only reading one line with a single getline() cal
    // getline(file1,line); // to get the whole line including spaces
    // cout<<"Reading from the file : "<<line<<endl;


    // Reading all the lines from the file 
    while (getline(file1,line))
    {
        cout<<"Reading from the file : "<<line<<endl;
    }
    file1.close();
    return 0;
}