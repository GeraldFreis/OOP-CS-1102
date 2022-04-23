#include <iostream>
#include <fstream>
#include <sstream>
using std::cout;
using std::string;

void calcseason(string &row){
    // precondition:
        // passing reference of the row as param
    // what function does;
        // changes the fourth element of the row to the season
    
    string date = row;
    date.c_str();
    // finding the month
    string month;
    for(int i = 0; i < date.size(); i++){
        if(date[i] == '\''){
            month += date[i+1];
            month += date[i+2];
            break;
        }
    }

    int monthint = std::stoi(month);
    
    // changing the month to its seasonal counterpart

}

class Testing{
    protected:
        string **data_matrix;
        string filename;
        int numberoflines;
    
    public :
        Testing();
        void csvtomatrix();
        string **getdata();
        void convertingcsv();
        void printdata();
};