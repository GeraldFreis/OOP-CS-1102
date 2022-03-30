#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        int rollid;
        string name;

    public:
    Student();
    Student(
        string name, int rollid
    );
    // functions
    void set_name(string input_name){
        name = input_name;
    }
    string get_name(){
        return name;
    }
    int get_id(){
        return rollid;
    }
    void set_id(int input_id){
        rollid = input_id;
    }
};

Student::Student(){
    string name = "";
    int rollid = 0;
};

int main(){
    Student *charles = new Student;
    charles->set_id(12);
    charles->set_name("charles");

    cout << charles->get_id() << endl;
    cout << charles->get_name() << endl;

    delete charles;

}