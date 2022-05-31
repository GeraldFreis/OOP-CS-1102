#include "hunter.h"

hunter::hunter(string n, int v): animal(n, v){  // create a hunter with name n and body volume v
    this->name = n;
    this->volume = v;
    kills = 0;
    nextID += 1;
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
