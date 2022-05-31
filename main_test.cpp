#include <iostream>
using std::cout; using std::string;
#include "animal.h"
#include "vegie.h"
#include "hunter.h"

int main(){
    animal *a_1 = new vegie("bob", 50);
    animal *a_2 = new vegie("bob", 60);
    animal *a_3 = new hunter("leo", 100);
    animal *a_4 = new hunter("leo", 1001);


    cout << a_1->get_animalID() << "\n";
    cout << a_2->get_animalID() << "\n";
    cout << a_3->get_animalID() << "\n";
    cout << a_4->get_animalID() << "\n";

}