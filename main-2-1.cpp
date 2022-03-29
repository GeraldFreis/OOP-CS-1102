#include <iostream>
using namespace std;

extern void hexDigits(int *, int);
extern int *readNumbers();

int main(){
    int *arr = readNumbers();
    hexDigits(arr, 10);
    return 0;
}