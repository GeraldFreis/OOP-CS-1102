#include <iostream>
using namespace std;

void print_class(std::string courses[4], std::string students[], int report_card[][4], int n){
    for(int i = 0; i < n+1; i++){
        cout << "report card " << courses[0] << " "<< courses[1] << " " << courses[2] << " " << courses[3] << " " << endl;
        cout << students[i] << " ";
        for(int j = 0; j < 4; j++){
            cout << report_card[i][j] << " ";
        }
        cout << endl;
    }
}