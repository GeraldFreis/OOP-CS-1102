#include "readingcsv.h"

extern int linenumber(string);
// constructors
ReadingCSV::ReadingCSV(){ // default

    // initialising member vars
    filename = "Week-7/futuretemp.csv";
    numberoflines = linenumber(filename);
    data_matrix = new string*[numberoflines];

    // initialising sub array of 3 columns for each row in the matrix
    for(int i = 0; i < numberoflines; i++){
        data_matrix[i] = new string[5];
    }
};

ReadingCSV::ReadingCSV(std::string _filename){ // parameterized

    // initialising member vars
    filename = _filename;
    numberoflines = linenumber(filename);
    data_matrix = new string*[numberoflines];

    // initialising sub array of 3 columns for each row in the matrix
    for(int i = 0; i < numberoflines; i++){
        data_matrix[i] = new string[5];
    }
};

// member functions
void ReadingCSV::csvtomatrix(){
    std::ifstream file(filename);
    std::string row;
    int index_row = 0;

    while(file.good()){ // while we are still in the range of the file

        // iterating over the elements in the row and capturing them into their respective positions in the matrix
        for(int i = 0; i < 2; i++){
            getline(file, data_matrix[index_row][i], ',');
            // cout << data_matrix[index_row][i] << "\n";
        }

        getline(file, data_matrix[index_row][2]);
        index_row++;
    }
};

string **ReadingCSV::getdata(){
    return data_matrix; // returning a pointer to the matrix
};

void ReadingCSV::printdata(){
    for(int i = 0; i < numberoflines; i++){ // iteraitng over every line and printing the data
        cout << data_matrix[i][0] << " " <<data_matrix[i][1] << " " << data_matrix[i][2] << "\n";
    }
};

// destructor
ReadingCSV::~ReadingCSV(){

    // deleting each row in the data matrix
    for(int i = 0; i < numberoflines; i++){
        delete [] data_matrix[i];
    }

    delete [] data_matrix; // deleting data matrix
};
