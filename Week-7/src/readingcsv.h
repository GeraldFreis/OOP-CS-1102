#include <iostream>
using std::cout;

class ReadingCSV{
    protected:
        std::string *data_matrix = new std::string[3];
        char file;
        const char *filename;

    public:
        // constructors
        ReadingCSV();
        ReadingCSV(char filename);

        // member functions
        void csvtomatrix(); // converts the csv to a matrix 
        std::string *getdata(); // returns a pointer to the matrix

        // destructor
        ~ReadingCSV(){delete [] data_matrix;};

};