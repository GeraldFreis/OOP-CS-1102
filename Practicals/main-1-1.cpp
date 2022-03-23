#include <iostream>
using namespace std;

extern void copy_2d_strings(std::string [][2], std::string[][2], int);

int main(){
    string arr1[3][2] = {{"a", "b"},
                         {"c", "d"},
                        {"a", "c"}};
    string arr2[3][2];
    copy_2d_strings(arr1, arr2, 3);
}
