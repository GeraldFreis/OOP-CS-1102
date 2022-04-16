#include <iostream>
#include "src/readingcsv.h" // class that reads the csv file
using std::cout;

extern int linenumber(string);

int main(){
    string _filename = "futuretemp.csv";
    
    ReadingCSV object(_filename); // initialising the object
    object.csvtomatrix();
    object.printdata(); // printing the data
}