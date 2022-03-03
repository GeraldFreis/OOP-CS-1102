#include <iostream>
// #include "function-3-4.cpp"
using namespace std;

extern void passorfail(char);

int main(int argc, char **argv){
    // char grades[6] = {'A', 'C', 'E', 'F', 'B', 'D'};
    // int grade_num = 6;

    for(int i=0; i<argc; i++){
        passorfail(*argv[i]);
    }
    return 0;
}