#include <iostream>
// #include <charconv>
// #include <string_view>
#include "function-1-2.cpp"
using namespace std;

extern double average(int[], int);

int main(int argc, char **argv)
{
    average(argv, argc);
    return 0;
}