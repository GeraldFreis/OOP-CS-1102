#include <iostream>
using namespace std;

int main(){
    int num = 42;
    int *ptr = &num;
    // *ptr = *ptr+5;


    cout << *ptr+5 << endl;
    // *ptr = * ptr-2;

    cout << *ptr+5-2 << endl;
}