#include <iostream>
#include <fstream>
#include <sstream>
using std::string;
using std::ifstream;
using std::ostringstream;

// function to take the file and find the number of lines 
int linenumber(string file)
{
    std::ifstream newfile(file, std::ifstream::binary); // initialising stream

    //  finding length of the file
    newfile.seekg (0, newfile.end);
    int length = newfile.tellg();
    newfile.seekg(0, newfile.beg);


    newfile.close();

    return length;
}

