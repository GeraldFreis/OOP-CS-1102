#include "readingcsv.h"

// constructors
ReadingCSV::ReadingCSV(){ // default
    std::string data_matrix[3] = {"Tuesday", "13", "24"};
    file = 'Week-7/futuretemp.csv';
    filename = &file;
};

ReadingCSV::ReadingCSV(char _filename){ // parameterized
    char file = _filename;
    filename = &file;
    std::string data_matrix[3] = {"","",""};
};

// member functions
void ReadingCSV::csvtomatrix(){

};
