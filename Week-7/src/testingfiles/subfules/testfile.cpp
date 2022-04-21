#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>
using std::cout;
using std::string;

extern int linenumber(string);

// function for parsing the information and printing the date


class ReadingCSV{
    protected:
        string **data_matrix;
        string filename;
        int numberoflines; // the number of lines in the csv

    public:
        // constructors
        ReadingCSV();
        ReadingCSV(string filename);

        // member functions
        void csvtomatrix(); // converts the csv to a matrix 
        string **getdata(); // returns a pointer to the matrix
        void printdata(); // prints the data matrix

        // destructor
        ~ReadingCSV();
};

ReadingCSV::ReadingCSV(){
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

