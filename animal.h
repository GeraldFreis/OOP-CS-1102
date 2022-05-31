#include <iostream>
#include <stack>
using std::string; using std::cout;
#ifndef ANIMAL_H
#define ANIMAL_H

class animal{
    public:
        animal(string n, int v) ;  // creates an animal with name n and body volume v.
                            // animals are allocated a unique ID on creation
        static int id;
        void set_name(string n);
        void set_volume(int v);
        virtual string get_name() = 0;
        int get_volume();
        int get_animalID();

    protected:
        string name ;              // the animal's name
        int animalID ;             // the animal's unique ID
        int volume ;               // the volume of the animal's body
};


#endif
