#include <iostream>
using namespace std;

void print_sevens(int *nums, int length){
    for(int i = 0; i < length; i++){
        int *ptr = nums;
        if(*(ptr+i)%7 == 0 && *(ptr+i) != 0){
            cout << *(ptr+i) << endl;
        }
    }
}