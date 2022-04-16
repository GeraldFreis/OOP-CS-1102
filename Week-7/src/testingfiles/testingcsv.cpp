#include <iostream>
#include <fstream>
#include <sstream>
using std::cout; using std::string;

extern int linenumber(string);

class TestingCSV{
    protected:
        string **data_matrix;
        string filename;
        int numberoflines;
    
    public:
        // constructors
        TestingCSV();
        TestingCSV(const string _filename);

        // member functions
        void printingdata();
        void readingdata();
        string *returndata();

        // destructors
        ~TestingCSV();
};  


/// initialising everything

TestingCSV::TestingCSV(){

    // initialising member vars
    filename = "Week-7/futuretemp.csv";
    numberoflines = linenumber(filename);
    data_matrix = new string*[numberoflines];

    // initialising sub array of 3 columns for each row in the matrix
    for(int i = 0; i < numberoflines; i++){
        data_matrix[i] = new string[3];
    }
};

TestingCSV::TestingCSV(const string _filename){

    // initialising member vars
    filename = _filename;
    numberoflines = linenumber(filename);
    data_matrix = new string*[numberoflines];

    // initialising sub array of 3 columns for each row in the matrix
    for(int i = 0; i < numberoflines; i++){
        data_matrix[i] = new string[3];
    }
};

void TestingCSV::readingdata(){
    std::ifstream file(filename);
    std::string row;
    int index_row = 0;

    while(file.good()){ // while we are still in the range of the file

        // iterating over the elements in the row and capturing them into their respective positions in the matrix
        for(int i = 0; i < 3; i++){
            getline(file, data_matrix[index_row][i]);
            cout << data_matrix[index_row][i] << "\n";
        }
        index_row++;
    }
}

void TestingCSV::printingdata(){
    for(int i = 0; i < numberoflines; i++){
        cout << data_matrix[i][0] << " " <<data_matrix[i][1] << " " << data_matrix[i][2] << "\n";
    }
};

string *TestingCSV::returndata(){
    return *data_matrix;
};

// destructor
TestingCSV::~TestingCSV(){
    // deleting each row in the data matrix
    for(int i = 0; i < numberoflines; i++){
        delete [] data_matrix[i];
    }

    delete [] data_matrix; // deleting data matrix
}

int main(){
    string _filename = "futuretemp.csv";
    TestingCSV object(_filename); // initialising the object
    object.readingdata();
    // object.printingdata();

    return 0;
}