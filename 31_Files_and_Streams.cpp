/*
This tutorial will teach you how to read and write from a file.
This requires another standard C++ library called fstream, which defines three new data types −

ofstream - This data type represents the output file stream and is used to
           create files and to write information to files.

ifstream - This data type represents the input file stream and is used to read
           information from files.

fstream - This data type represents the file stream generally, and has the
          capabilities of both ofstream and ifstream which means it can
          create files, write information to files, and read information from files.

To perform file processing in C++, header files <iostream> and <fstream>
must be included in your C++ source file.

void open(const char *filename, ios::openmode mode);

ios::app - Append mode. All output to that file to be appended to the end.
ios::ate - Open a file for output and move the read/write control to the end of the file.
ios::in - Open a file for reading.
ios::out - Open a file for writing.
ios::trunc - If the file already exists, its contents will be truncated before opening the file.

You can combine two or more of these values by ORing them together. For example if you want to open a file in write mode and want to truncate it in case that already exists, following will be the syntax −

ofstream outfile;
outfile.open("file.dat", ios::out | ios::trunc );
Similar way, you can open a file for reading and writing purpose as follows −

fstream  afile;
afile.open("file.dat", ios::out | ios::in );

void close();
*/

#include <fstream>
#include <iostream>
using namespace std;

int main () {
   char data[100];

   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: ";
   cin >> data;
   cin.ignore();

   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile;
   infile.open("afile.dat");

   cout << "Reading from the file" << endl;
   infile >> data;

   // write the data at the screen.
   cout << data << endl;

   // again read the data from the file and display it.
   infile >> data;
   cout << data << endl;

   // close the opened file.
   infile.close();

   return 0;
}

/*
File Position Pointers
Both istream and ostream provide member functions for repositioning the
file-position pointer. These member functions are seekg ("seek get") for
istream and seekp ("seek put") for ostream.

The argument to seekg and seekp normally is a long integer. A second argument
can be specified to indicate the seek direction. The seek direction can be
ios::beg (the default) for positioning relative to the beginning of a stream,
ios::cur for positioning relative to the current position in a stream or
ios::end for positioning relative to the end of a stream.

// position to the nth byte of fileObject (assumes ios::beg)
fileObject.seekg( n );

// position n bytes forward in fileObject
fileObject.seekg( n, ios::cur );

// position n bytes back from end of fileObject
fileObject.seekg( n, ios::end );

// position at end of fileObject
fileObject.seekg( 0, ios::end );
*/
