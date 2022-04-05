#include <iostream>
#include "person.h"
using namespace std;

int main(){
    person *people = new person[4];

    people[0].setName("adrian");
    people[0].setSalary(-10);

    people[1].setName("bob");
    people[1].setName("Jim");
    people[1].setSalary(120000000);

    people[2].setName("Arthur");
    people[2].setSalary(31030);
    people[2].setSalary(-121);

    people[3].setName("Mohad");
    people[3].setSalary(983);



    cout << people[0].getName() << " makes: " << people[0].getSalary() << "\n";
    cout << people[1].getName() << " makes: " << people[1].getSalary() << "\n";
    cout << people[2].getName() << " makes: " << people[2].getSalary() << "\n";
    cout << people[3].getName() << " makes: " << people[3].getSalary() << "\n";

    delete [] people;
}