#include <iostream>
#include "function-1-3.cpp"
// #include <string>
using namespace std;

extern void print_class(std::string [4], std::string [], int [][4], int);

int main(){
    std::string courses[4] = {"Maths", "Algebra", "Programming", "English"};
    int num_of_students;
    cout << "Please enter a number of students: ";
    cin >> num_of_students;
    cout << endl;
    int grades[num_of_students][4];
    std::string students[num_of_students];
    for(int i = 0; i < num_of_students; i++){
        cout << "Enter a student name: ";
        cin >> students[i];
        cout << endl;
        for(int j = 0; j < 3; j++){
            cout << "Enter the grade for this student: ";
            cin >> grades[i][j];
            cout << endl;
        }
    }
    print_class(courses, students, grades, num_of_students);
    return 0; 
}