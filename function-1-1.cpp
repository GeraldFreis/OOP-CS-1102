#include <iostream>
#include <string>
using namespace std;

void copy_2d_strings(std::string first[][2], std::string second[][2], int n){
    int counter = 0;
    int i = 0;
    while(i!=n){
        for(int j = 0; j < 2; j++){
            second[i][j] = first[i][j];
        }
        counter += 1;
        i++;
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << second[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}  