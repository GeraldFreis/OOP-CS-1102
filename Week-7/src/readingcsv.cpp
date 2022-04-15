#include "readingcsv.h"

// constructors
ReadingCSV::ReadingCSV(){ // default
    std::string data_matrix[3] = {"Tuesday", "13", "24"};
    filename = 'Week-7/futuretemp.csv';
};

ReadingCSV::ReadingCSV(std::string _filename){ // parameterized
    filename = _filename;
    // calling a function to find the number of lines in the csv
};

// member functions
void ReadingCSV::csvtomatrix(){
    std::ifstream file(filename);
    std::string row;
    int index = 0;

    while(file.good()){
        getline(file, data_matrix[index]);
        index++;
    }

    cout << row << "\n"; // printing without resetting buffer

    file.close();
};
