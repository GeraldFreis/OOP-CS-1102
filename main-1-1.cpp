#include <iostream>
#include "function-1-1.cpp"

// question: What's the point of saying extern void and not just including the file to link to
// I ask because I had an issue with the test submission where the compiler failed to compile because of multiple definitions of the 'hello' function
// extern void hello();

int main(){
    hello();
    return 0;
}
