#include <iostream>
#include "function-2-3.cpp"
#include <string>
using namespace std;

extern float arithmetic_ops(float *, float *, float *);

int main(){
    float *left = new float;
    float *right = new float;
    float *op = new float;

    cout << "please enter your name: " << endl;
    cin >> *op;
    cout << "Enter a float" << endl;
    cin >> *left;
    cout << "Enter another:" << endl;
    cin >> *right;
    arithmetic_ops(left, right, op);
    return 0;
    // delete left, right, op;
}
