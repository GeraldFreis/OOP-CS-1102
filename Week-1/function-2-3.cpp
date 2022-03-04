// switch statement testing for values {2, 5, 9} in a given array
#include <iostream>
#include <stdlib.h>
using namespace std;

void twofivenine(int array[], int n){
    int two_counter = 0; // number which stores the amount of times that 2 occurs in the array
    int five_counter = 0; // number storing amount of times that five occurs in the array
    int nine_counter = 0; // number storing the amount of times that nine occurs in the array

    if(n < 1){
        cout << "the number of elements is less than 1" << endl;
        // return 0;
    }
    else{
        for(int i=0; i< n; i++){
            switch(array[i]){
                case 2:
                    two_counter += 1;
                    break;
                case 5:
                    five_counter += 1;
                    break;
                case 9:
                    nine_counter += 1;
                    break;
                default:
                    break;
                
            }
        }
        printf("2:%d;5:%d;9:%d;\n", two_counter, five_counter, nine_counter);
    }
}
