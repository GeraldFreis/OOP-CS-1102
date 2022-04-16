#include <iostream>
#include <fstream>
#include <sstream>
using std::cout;
using std::string;

class ReadingCSV{
    protected:
        string **data_matrix = new string*[100];
        string filename;
        int numberoflines; // the number of lines in the csv

    public:
        // constructors
        ReadingCSV();
        ReadingCSV(string filename);

        // member functions
        void csvtomatrix(); // converts the csv to a matrix 
        string *getdata(); // returns a pointer to the matrix

        // destructor
        ~ReadingCSV(){delete [] data_matrix;};

};