#include <iostream>
#include "function-2-3.cpp"
#include <string>
using namespace std;

float arithmetic_ops(float, float, string);

int main(){
    float left;
    float right;
    string op;

    cout << "please enter your name: " << endl;
    cin >> op;
    cout << "Enter a float" << endl;
    cin >> left;
    cout << "Enter another:" << endl;
    cin >> right;
    arithmetic_ops(left, right, op);
    return 0;
    // delete left, right, op;
}
