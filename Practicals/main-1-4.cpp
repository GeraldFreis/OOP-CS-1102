#include <iostream>
// #include "function-1-4.cpp"
using namespace std;

extern void cpyda(double *, double *, int);


int main(){
    // initialising our pointers
    double *old_array, *new_array;
    double arr[3] = {1.0, 2.0, 3.0};
    double empty[3] = {};
    old_array = arr;
    new_array = empty;
    cpyda(old_array, new_array, 3);
    return 0;
}