#include <iostream>
using std::cout; using std::string;
extern int add(int, int);

int main(){
    if(add(1,2)==3){
        cout << "Test 1 passed" << "\n";
    }
    
    if(add(123,-19) == 104){
        cout << "Test 2 passed" << "\n";
    }

    if(add(-120, -130) == -250){
        cout << "Test 3 passed" << "\n";
    }
}