#include <iostream>
#include <string>
using namespace std;


float add_op(float left, float right){
    return left + right;
}
float subtract_op(float left, float right){
    return left - right;
}
float arithmetic_ops(float left, float right, std::string op){
    cout << add_op(left, right) << " "<< subtract_op(left, right) << endl;
}