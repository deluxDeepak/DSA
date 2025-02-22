#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // creatio of ofstream class object 
    ofstream fout;

    string line;
    // use function open to open the file 
    fout.open("sample.txt",ios::app);
    if (!fout)
    {
        cout <<"Error in opening the file :" <<endl;
    }
    // executing the lop if file open 
    
    while (fout)
    {
        // read the line from the  input 
        getline(cin,line);


        // base condition (loop se niklne ka )
        // press -1 to exit 
        if (line=="-1")
        {
            break;
        }
        // write line in file 
        fout <<line <<endl;
        
    }

    // closing the file 
    fout.close();


    // creation of ifstream class to read the file 
    ifstream fin;
    fin.open("sample.txt",ios::in);

    // execute the loop jab tak file ka end naa aa jaye 
    while (getline(fin,line))
    {
        cout <<"Reading the file "<<line <<endl;
    }
    // close the file 
    fin.close();
    
    
    return 0;
}