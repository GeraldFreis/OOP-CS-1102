#include <iostream>
#include "function-1-1.cpp"
using namespace std;

extern int sum_array(int[], int);

int main(int argc, char **argv)
{
    sum_array(argv, argc);
    return 0 ;
}
