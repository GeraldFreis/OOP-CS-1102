#include <iostream>
#include "function-1-1.cpp"
using namespace std;

extern int diagonal(int []);

int main(){
    int matrix[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    cout << diagonal(matrix) << endl;
    return 0;
}
