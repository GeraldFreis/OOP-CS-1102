#include <iostream>
#include "person.h"
using namespace std;

int main(){
    // person *people = new person[4];

    person people_1("adrian", -10);
    person people_2("bob", 100);
    person people_3("Jim", 10000);

    person people_4("Arthur", -30131);
    people_4.setSalary(-121);

    person people_5("Mohad", 983);


    cout << people_1.getName() << " makes: " << people_1.getSalary() << "\n";
    cout << people_2.getName() << " makes: " << people_2.getSalary() << "\n";
    cout << people_3.getName() << " makes: " << people_3.getSalary() << "\n";
    cout << people_4.getName() << " makes: " << people_4.getSalary() << "\n";

    // delete [] people;
}