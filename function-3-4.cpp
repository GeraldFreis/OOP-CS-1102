#include <iostream>
#include <stdlib.h>
using namespace std;

void passorfail(char grade){
    switch(grade){
        case 'A':
            cout << "Person passed" << endl;
            break;
        case 'B':
            cout << "Person passed" << endl;
            break;
        case 'C':
            cout << "Person passed" << endl;
            break;
        case 'D':
            cout << "Person failed" << endl;
            break;
        case 'E':
            cout << "Person failed" << endl;
            break;
        case 'F':
            cout << "Person failed" << endl;
            break;
        default :
            cout << "Not a grade" << endl;
            break;
    }
}