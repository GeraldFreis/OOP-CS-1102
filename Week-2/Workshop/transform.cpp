#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

void binary(int number){

    bool stepcounter = true;
    int new_num = 0;
    string binary_num;

    for(int i = 0; i < 100000; i++){
        if(i == 0){
            if(number % 2 == 0){
                new_num = round(number / 2);
                binary_num += '0';
            }
            else if(number % 2 != 0){
                new_num = round(number / 2);
                binary_num += '1';
            }
        }

        else{
            if(new_num < 2){
                break;
            }
            else{

                int tempnum = new_num;

                if(tempnum % 2 == 0){
                    binary_num += '0';
                    new_num = round(tempnum / 2);
                }

                else if(tempnum % 2 != 0){
                    binary_num += '1';
                    new_num = round(tempnum / 2);
                }
            }
        }
    }

    binary_num += '1';
    int binary_array[(sizeof(binary_num)/4) + 1];
    int array_size = binary_num.size();
    int number_counter = 0;
    // cout << sizeof(binary_num) << endl;
    for(int i = array_size-1 ; i >= 0; i--){
        cout << binary_num[i];
    // reversing the array
    }

    cout << endl;
    // cout << binary_num << endl;
}

int main(){
    int base_10_num = 19;
    binary(base_10_num);
    return 0;
}
