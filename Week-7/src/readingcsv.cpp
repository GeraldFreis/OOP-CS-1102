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

void ReadingCSV::calcseason(){
    // precondition:
        // passing reference of the row as param
    // postcondition
        // changes the fourth element of the row to the season
    for(int i = 0; i < numberoflines; i++){
        string date = data_matrix[i][0];
        
        // finding the month
        date.c_str();
        string month;

        for(int j = 0; j < date.size(); j++){
            if(date[j] == '/'){
                month += ((date[j+1]));
                month += (date[j+2]);

                // rewriting the day of the week as the first element in the row
                string previous_letters;
                for(int k = 0; k < j; k++){
                    previous_letters += (date[k]);
                }
                data_matrix[i][0] = previous_letters;
            }
        }
        int monthint = stoi(month);
        
    //     // changing the month to its seasonal counterpart
        if(monthint < 3 || monthint >= 11){
            data_matrix[i][3] = "summer";
        }
        else if (monthint >= 3 && monthint < 5){
            data_matrix[i][3] = "autumn";
        }
        else if(monthint >= 5 && monthint < 9)
        {
            data_matrix[i][3] = "winter";
        }
        else if(monthint >= 9 && monthint < 11){
            data_matrix[i][3] = "spring";
        }
        else{
            cout << "not in season range" << "\n";
        }
    }
}

string **ReadingCSV::getdata(){
    return data_matrix; // returning a pointer to the matrix
};

void ReadingCSV::printdata(){
    for(int i = 0; i < numberoflines; i++){ // iteraitng over every line and printing the data
        for(int j = 0; j < 4; j++){
            cout << data_matrix[i][j] << " "; 
        }
        cout << data_matrix[i][5] << "\n";
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
