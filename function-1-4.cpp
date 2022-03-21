#include <iostream>
using namespace std;

int size_of_variable_star_arr(){
    int *arr = new int[3];
    // cout << size_t(arr) << endl;
    cout << sizeof(arr) << endl;
    return 0;
}