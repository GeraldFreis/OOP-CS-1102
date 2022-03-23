#include <iostream>
using namespace std;

void print_sevens(int *nums, int length){
    for(int i = 0; i < length; i++){
        int *ptr = (nums+i);
        if(*ptr%7 == 0 && *ptr!= 0){
            cout << *ptr << endl;
        }
    }
}