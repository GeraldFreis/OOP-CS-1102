#include <iostream>
#include <fstream>
#include <sstream>
using std::string;

// function to take the file and find the number of lines 
int linenumber(string file)
{
    std::ifstream newfile(file);
    int counter = 0;
    std::string line;

    while(std::getline(newfile, line)){
        counter += 1;
    }

    newfile.close();

    return counter;
}