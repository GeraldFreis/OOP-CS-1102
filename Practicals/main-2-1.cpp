#include <iostream>
#include "function-2-1.cpp"
using namespace std;

extern void print_sevens(int *, int);

int main(){
    int num_array[5] = {7, 18, 0, 14, 21};
    print_sevens(num_array, 5);
    return 0;
}
