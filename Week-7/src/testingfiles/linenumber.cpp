#include <iostream>
#include <fstream>
#include <sstream>
using std::string;
using std::ifstream;
using std::ostringstream;

// function to take the file and find the number of lines 
int linenumber(const string file)
{
    std::ifstream newfile(file, std::ifstream::binary); // initialising stream

    //  finding length of the file
    std::string array[100]; // initialising an array of one hundred rows as that is the max that the text will include
    int counter = 0;

    while(getline(newfile, array[counter])){ // reading the current line into the ith array
        counter += 1; 
    }
    
    newfile.close();

    return counter;
}

