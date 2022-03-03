#include <iostream>
#include <stdlib.h>
using namespace std;

void passorfail(char grade){
    switch(grade){
        case 'A':
            cout << "Pass" << endl;
            break;
        case 'B':
            cout << "Pass" << endl;
            break;
        case 'C':
            cout << "Pass" << endl;
            break;
        case 'D':
            cout << "Fail" << endl;
            break;
        case 'E':
            cout << "Fail" << endl;
            break;
        case 'F':
            cout << "Fail" << endl;
            break;
        default :
            cout << "Not a grade" << endl;
            break;
    }
}