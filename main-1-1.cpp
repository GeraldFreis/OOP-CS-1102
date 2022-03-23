#include <iostream>
// #include "function-1-1.cpp"
using namespace std;

extern void copy_2d_strings(std::string [][2], std::string[][2], int);

int main(){
    string arr1[3][2] = {{"a", "b"},
                         {"c", "d"},
                        {"e", "f"}};
    string arr2[3][2];
    copy_2d_strings(arr1, arr2, 3);
}
