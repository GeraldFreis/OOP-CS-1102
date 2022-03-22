#include <iostream>
#include <string>
using namespace std;

void copy_2d_strings(std::string first[][2], std::string second[][2], int n){
    for(int i = 0; i < n; i ++){
        for(int j = 0; i < 2; i++){
            second[i][j] = first[i][j];
        }
    }
    cout << first[1][1] << endl;
}  