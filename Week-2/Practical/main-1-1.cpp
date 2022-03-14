#include <iostream>
// #include "function-1-1.cpp"
using namespace std;

extern int diagonal(int [4][4]);

int main(int matrix[4][4]){
    cout << diagonal(matrix) << endl;
    return 0;
}
