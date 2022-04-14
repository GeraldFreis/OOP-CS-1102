#include "readingcsv.h"

// constructors
ReadingCSV::ReadingCSV(){ // default
    std::string data_matrix[3] = {"Tuesday", "13", "24"};
    filename = 'Week-7/futuretemp.csv';
};

ReadingCSV::ReadingCSV(std::string _filename){ // parameterized
    filename = _filename;
    std::string data_matrix[3] = {"","",""};
};

// member functions
void ReadingCSV::csvtomatrix(){
    std::ifstream file(filename);
    std::string row;

    while(file.good()){
        getline(file, row);
    }

    cout << row << "\n"; // printing without resetting buffer
};
