#include <iostream>
using namespace std;

int main(){
    float num = 1.2;
    float *ptr = &num;
    cout << ptr << " " << *ptr;
}