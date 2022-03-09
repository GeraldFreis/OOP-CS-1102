#include <iostream>
using namespace std;

void count_numbers(int array[4][4]){
    int zero_counter = 0, one_counter = 0, two_counter = 0, three_counter =0, four_counter=0, five_counter=0, six_counter=0, seven_counter = 0, eight_counter=0, nine_counter=0;
    for(int row = 0; row < 4; row++){
        for(int column = 0; column < 4; column++){
            if(0 <= array[row][column] <= 9){
                if(array[row][column] == 0){
                    zero_counter += 1;
                }
                else if(array[row][column] == 1){
                    one_counter += 1;
                }
                else if(array[row][column] == 2){
                    two_counter += 1;
                }
                else if(array[row][column] == 3){
                    three_counter += 1;
                }
                else if(array[row][column] == 4){
                    four_counter += 1;
                }
                else if(array[row][column] == 5){
                    five_counter += 1;
                }
                else if(array[row][column] == 6){
                    six_counter += 1;
                }
                else if(array[row][column] == 7){
                    seven_counter += 1;
                }
                else if(array[row][column] == 8){
                    eight_counter += 1;
                }
                else if(array[row][column] == 9){
                    nine_counter += 1;
                }
            }
        }
    }
    printf("0:%d;1:%d;2:%d;3:%d;4:%d;5:%d;6:%d;7:%d;8:%d;9:%d;", zero_counter, one_counter, two_counter, three_counter, four_counter, five_counter, six_counter, seven_counter, eight_counter, nine_counter);
}