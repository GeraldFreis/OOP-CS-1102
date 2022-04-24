#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using std::cout;
using std::string;

extern int linenumber(string);



class Testing{
    protected:
        string **data_matrix;
        string filename;
        int numberoflines;
    
    public :
        Testing();
        void calcseason();
        void csvtomatrix();
        void printdata();
        ~Testing();
};

Testing::Testing(){
    // default constructor

    filename = "futureshite.csv";
    numberoflines = linenumber(filename);
    data_matrix = new string *[numberoflines];

    // creating each of the columns in the matrix
    for(int i = 0; i < numberoflines; i++){
        data_matrix[i] = new string[5];
    }
}

void Testing::csvtomatrix(){
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
}

void Testing::calcseason(){
    // precondition:
        // passing reference of the row as param
    // postcondition
        // changes the fourth element of the row to the season
    for(int i = 0; i < numberoflines; i++){
        string date = data_matrix[i][0];
        
        // finding the month
        date.c_str();
        string month;

        for(int i = 0; i < date.size(); i++){
            if(date[i] == '/'){
                month += ((date[i+1]));
                month += (date[i+2]);
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

void Testing::printdata(){
    for(int row = 0; row < numberoflines; row++){
        for(int col = 0; col < 5; col++){
            cout << data_matrix[row][col] << "\n";
        }
    }
}

Testing::~Testing(){
    for(int i = 0; i < numberoflines; i++){
        delete [] data_matrix[i];
    }
    delete [] data_matrix;
}

int main(){
    Testing testingobject;

    testingobject.csvtomatrix();
    testingobject.calcseason();
    testingobject.printdata();
}