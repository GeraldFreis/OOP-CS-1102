#include "readingcsv.h"

extern int linenumber(string); // function to find the number of lines in the file

// constructors
ReadingCSV::ReadingCSV(){ // default
    std::string data_matrix[3] = {"Tuesday", "13", "24"};
    filename = "Week-7/futuretemp.csv";
};

ReadingCSV::ReadingCSV(std::string _filename){ // parameterized
    filename = _filename;

    // calling a function to find the number of lines in the csv
    numberoflines = linenumber(filename);

    // initialising the data matrix
    string **data_matrix = new string*[numberoflines];
    for(int i = 0; i < 3; i++){
        data_matrix[i] = new string[3]; // creating 3 columns for every row in the data matrix
    }

};

// member functions
void ReadingCSV::csvtomatrix(){
    std::ifstream file(filename);
    std::string row;
    int index_row = 0;

    while(file.good()){ // while we are still in the range of the file
        int index_column = 0;

        // iterating over the elements in the row and capturing them
        for(int i = 0; i < 3; i++){
            getline(file, data_matrix[index_row][index_column]);
            index_column++;
        }
        index_row++;
    }

    cout << row << "\n"; // printing without resetting buffer

    file.close();
};

// destructor
ReadingCSV::~ReadingCSV(){
    // deleting each row in the data matrix
    for(int i = 0; i < numberoflines; i++){
        delete [] data_matrix[i];
    }

    delete [] data_matrix; // deleting data matrix
}
