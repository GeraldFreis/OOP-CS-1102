#include <iostream>
#include <fstream>
#include <sstream>
using std::cout;
using std::string;

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
        void calcseason(); // reads the season and adds it as the fourth element in the row
        string **getdata(); // returns a pointer to the matrix
        void printdata(); // prints the data matrix

        // destructor
        ~ReadingCSV();

};