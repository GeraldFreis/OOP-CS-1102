#include <iostream>
#include "function-1-1.cpp"
using namespace std;

extern int sum(int*, int);

int main(int argc, char **argv)
{
    sum(argv, argc);
    return 0 ;
}
