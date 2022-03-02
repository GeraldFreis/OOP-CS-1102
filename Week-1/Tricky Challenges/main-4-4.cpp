#include <iostream>
#include "function-4-4.cpp"
using namespace std;

extern void passorfail(char);

int main(){
    char grades[6] = {'A', 'C', 'E', 'F', 'B', 'D'};
    int grade_num = 6;

    for(int i=0; i<grade_num; i++){
        passorfail(grades[i]);
    }
    return 0;
}