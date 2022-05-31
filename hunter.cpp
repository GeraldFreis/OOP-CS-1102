#include "hunter.h"

int hunter::nextID = 1000;

hunter::hunter(string n, int v): animal(n, v){  // create a hunter with name n and body volume v
    name = n;
    volume = v;
    kills = 0;
    this->animal::id = nextID;
    this->nextID += 1;
}

int hunter::get_kills(){
    return kills;
}

void hunter::set_kills(int kill){
    kills = kill;
}

string hunter::get_name(){
    return "Hunter: " + name;
}
