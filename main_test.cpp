#include <iostream>
using std::cout; using std::string;
#include "animal.h"
#include "vegie.h"
#include "hunter.h"
#include "sort_by_name.h"

int main(){
    animal *a_1 = new vegie("bob", 50);
    animal *a_2 = new vegie("bob", 60);
    animal *a_3 = new hunter("leo", 100);
    animal *a_4 = new hunter("leo", 1001);


    cout << a_1->get_animalID() << "\n";
    cout << a_2->get_animalID() << "\n";
    cout << a_3->get_animalID() << "\n";
    cout << a_4->get_animalID() << "\n";

    animal **animals = new animal*[10];
    animals[0] = new vegie("car", 10);
    animals[1] = new vegie("bar", 10);
    animals[2] = new vegie("far", 10);
    animals[3] = new vegie("dar", 10);

    animals[4] = new hunter("cad", 10);
    animals[5] = new hunter("bad", 10);
    animals[6] = new hunter("fad", 10);
    animals[7] = new hunter("dad", 10);
    animals[8] = new hunter("lad", 10);
    animals[9] = new hunter("aad", 10);

    sort_by_name sorter;
    sorter.sort(animals, 10);

    for(int i = 0; i < 10; i++){
        cout << animals[i]->get_name() << "\n";
    }

    
    
}