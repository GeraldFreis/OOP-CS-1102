#include <iostream>
using namespace std;
int size_of_variable_star_t(){
    int *t = new int;
    cout << sizeof(t) << endl;
    delete t;
    // return sizeof(t);
}