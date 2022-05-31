#include "animal.h"

animal::animal(string n, int v){  // creates an animal with name n and body volume v.
                           // animals are allocated a unique ID on creation
    name = n;
    volume = v;
    animalID = id;
}

void animal::set_name(string n){
    name = n;
}

void animal::set_volume(int v){
    volume = v;
}

// string animal::get_name(){
//     return name;
// }

int animal::get_volume(){
    return volume;
}

int animal::get_animalID(){
    return animalID;
}

