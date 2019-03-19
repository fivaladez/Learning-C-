#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    ofstream myfile_out ("example.txt");
    //myfile.open ("example.txt", ios::out | ios::app | ios::binary); To initialize it after declaration
    if (myfile_out.is_open())
    {
        myfile_out << "This is a line.\n";
        myfile_out << "This is another line.\n";
        myfile_out.close();
    }
    else cout << "Unable to open file";
    myfile_out.close();


    string line;
    streampos begin,end;/* specific type used for buffer and file positioning
                        and is the type returned by file.tellg()*/
    ifstream myfile_in ("example.txt");

    if (myfile_in.is_open())
    {
        while ( getline (myfile_in,line) )
        {
            cout << line << '\n';//Reading line by line
        }

        /* Knowing the size of the file */
        myfile_in.seekg (0, ios::beg);
        begin = myfile_in.tellg();
        myfile_in.seekg (0, ios::end);
        end = myfile_in.tellg();
        cout << "size is: " << (end-begin) << " bytes.\n";

        myfile_in.close();
    }
    else cout << "Unable to open file";


    return 0;

}
