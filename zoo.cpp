#include "zoo.h"

zoo::zoo(string n,int cows,int lions){      // create a zoo with the given number of cows and lions
    *animals = new animal[cows+lions];

    for(int i = 0; i < cows; i++){
        *animals[i] = vegie("daisy", 100);
    }

    for(int i = 0; i < lions; i++){
        *animals[i] = hunter("clarence", 50);
    }
    name = n;
    number_of_animals = cows + lions;

}

string zoo::get_name(){
    return name;
}

int zoo::get_number_of_animals(){
    return number_of_animals;
}
animal **zoo::get_animals(){
    return animals;
}
