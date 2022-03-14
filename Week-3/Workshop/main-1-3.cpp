#include <iostream>
#include "function-1-3.cpp"
// #include <string>
using namespace std;

extern void print_class(std::string [4], std::string [], int [][4], int);

int main(){
    std::string courses[4] = {"Maths", "Algebra", "Programming", "English"};
    int num_of_students;
    cin >> "Please enter a number of students: " >> num_of_students >> endl;
    int grades[][4];
    std::string students[num_of_students];
    for(int i = 0; i < n; i++){
        cin >> "Enter a student name: " >> endl;
        for(int j = 0; j < 3; j++){
            cin >> "Enter the grade for this student: " >> grades[i][j] >> endl;
        }
    }
    return 0; 
}