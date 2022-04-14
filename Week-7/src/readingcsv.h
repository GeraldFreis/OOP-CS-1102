#include <iostream>
#include <fstream>
#include <sstream>
using std::cout;

class ReadingCSV{
    protected:
        std::string *data_matrix = nullptr;
        std::string filename;

    public:
        // constructors
        ReadingCSV();
        ReadingCSV(std::string filename);

        // member functions
        void csvtomatrix(); // converts the csv to a matrix 
        std::string *getdata(); // returns a pointer to the matrix

        // destructor
        ~ReadingCSV(){delete [] data_matrix;};

};