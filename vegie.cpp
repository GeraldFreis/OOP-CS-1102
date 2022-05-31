#include "vegie.h"

int vegie::nextID = 100;

vegie::vegie(string n,int v): animal(n, v){      // create a vegie with name n and body volume v
    name = n;
    volume = v;
    favourite_food = "grass";
    id = nextID;
    animalID = nextID;
    nextID += 1;
}

string vegie::get_name(){
    return "Safe: " + name;
}

string vegie::get_favourite_food(){
    return favourite_food;
}
void vegie::set_favourite_food(string food){
    favourite_food = food;
}
