#include <iostream>
using namespace std;

int main(){
    double array[2][2] = {{1, 2}, {3, 4}};
    double *ptr = &array[0][0];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << *(ptr+i+j) << endl;
        }
    }
}