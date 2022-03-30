#include <iostream>
#include <string>
using namespace std;

class Student{
    protected:
        string name;
        int studentid;
        string studentbackground;
        int booksonloan;
    public:
        Student();
        void set_student_name(string inputname){
            name = inputname;
        }
        void set_student_id(int id){
            studentid = id;
        }
        void set_student_background(string background){
            studentbackground = background;
        }
        void set_books_on_loan(int numberofbooks){
            booksonloan = numberofbooks;
        }

        void modify_books_on_loan(string operation, int factor){
            if(operation == "increase"){
                booksonloan += factor;
            }
            else if(operation == "decrease"){
                booksonloan -= factor;
            }
            else if(operation == "delete all"){
                booksonloan = 0;
            }
        }

        string get_name(){
            return name;
        }
        int get_student_id(){
            return studentid;
        }
        string get_student_background(){
            return studentbackground;
        }
        int get_books_on_loan(){
            return booksonloan;
        }

};

Student::Student(){
    string name = "";
    int studentid = 0;
    string studentbackground = "";
    int booksonloan = 0;
};

class StudentClass{
    protected:
        int studentnumber;
        string *names = new string[studentnumber];
        string teachername;
        int teacherid;
        int mainroom;

    public:
        StudentClass();

        // setting / modifying functions
        void set_names(string *studentnames, int number){
            for(int i = 0; i < number; i++){
                names[i] = studentnames[i];
            }
        }
        void set_teacher_name(string inputtedname){
            teachername = inputtedname;
        }
        void set_teacher_id(int inputtedteacherid){
            teacherid = inputtedteacherid;
        }
        void set_mainroom(int mainroomid){
            mainroom = mainroomid;
        }
        void set_student_number(int numberofstudents){
            studentnumber = numberofstudents;
        }
        // getting / retrieving functions
        string *get_names(){
            return names;
        }
        string get_teacher_name(){
            return teachername;
        }

        int get_teacher_id(){
            return teacherid;
        }

        int get_mainroom(){
            return mainroom;
        }

        int get_student_number(){
            return studentnumber;
        }
        ~StudentClass(){
            delete [] names;
        };
};

StudentClass::StudentClass(){
    int studentnumber = 0;
    string *names = new string[studentnumber];
    string teachername = "";
    int teacherid = 0;
    int mainroom = 0;
};

int main(){
    StudentClass *a1 = new StudentClass;
    Student *students = new Student[4];
    
    students[1].set_student_name("Jeff");
    students[1].set_student_background("Zuid Afrikaans");
    students[1].set_student_id(1853059);
    students[1].set_books_on_loan(12);

    students[0].set_student_name("Johan");
    students[0].set_student_background("Deutsch");
    students[0].set_student_id(123);
    students[0].set_books_on_loan(1800);

    students[2].set_student_name("cobus");
    students[2].set_student_background("Russies");
    students[2].set_student_id(000001);
    students[2].set_books_on_loan(-18);

    students[3].set_student_name("Gerhardus");
    students[3].set_student_background("Australianse");
    students[3].set_student_id(2222);

    string names[4];
    for(int i = 0; i < 4; i++){
        names[i] = students[i].get_name();
    }

    a1-> set_mainroom(101010);
    a1->set_teacher_id(00001);
    a1->set_teacher_name("Janny");
    a1->set_student_number(4);
    a1->set_names(names, 3);

    cout << a1->get_names() << endl;

    for(int i = 0; i < 4; i++){
        cout << students[i].get_name() << " (" << students[i].get_student_id() << ")" << " has: " << students[i].get_books_on_loan() << " books on loan" << endl; 
    }

    cout << "All of the students go to the library" << endl;
    cout << "Jeff returns 2 books\n" << " Johan takes two books out\n" << " cobus returns all his books\n" << " Gerhardus takes 2 books out "<< endl;

    students[0].modify_books_on_loan("decrease", 2);
    students[1].modify_books_on_loan("increase", 2);
    students[2].modify_books_on_loan("delete all", 2);
    students[3].modify_books_on_loan("increase", 2);
    
    cout << "Changes have been made\n" << "***********" << endl;
    for(int i = 0; i < 4; i++){
        cout << students[i].get_name() << " (" << students[i].get_student_id() << ")" << " has: " << students[i].get_books_on_loan() << " books on loan" << endl; 
    }
    delete a1;
    delete [] students;
}