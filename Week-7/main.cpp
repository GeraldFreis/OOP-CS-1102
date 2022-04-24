#include <iostream>
#include "src/readingcsv.h" // class that reads the csv file
#include "src/interpretingcsv.h"

using std::cout;

extern int linenumber(string);

int main(){

    string _filename = "futuretemp.csv";
    
    ReadingCSV object(_filename); // initialising the reading csv object
    object.csvtomatrix();
    object.calcseason();
    object.printdata();

    // object.printdata(); // printing the data
    // int numberoflines = linenumber(_filename);

    // // initialising the interpreting csv objects
    // InterpretingCSV *interpretarray = new InterpretingCSV[numberoflines];
    
    // // interpreting the data row by row:
    // std::string **returnedmatrix = object.getdata();

    // for(int i = 0; i < numberoflines; i++){
    //     interpretarray[i].setdata(returnedmatrix[i][0], returnedmatrix[i][1], returnedmatrix[i][2]);
    //     interpretarray[i].findingschedule();
    // }

    // delete [] interpretarray;
} 