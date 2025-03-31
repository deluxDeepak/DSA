#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    // raeding the tetx file 
    ifstream file("sample1.txt");
    if(!file)
    {
        cout<<"Error in opening :" <<endl;
    }
    string line;
    // file>>line;
    getline(file,line); // to get the whole line including spaces
    cout <<line<<endl;
    cout<<"File opened successfully and data read!"<<endl;
    file.close();
    return 0;
}