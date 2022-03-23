#include <iostream>
// #include "function-1-3.cpp"
using namespace std;

extern void cpyia(int [], int [], int);

int main(){
    int old_array[3] = {1,2,3};
    int new_array[3];
    cpyia(old_array, new_array, 3);
    return 0;
}