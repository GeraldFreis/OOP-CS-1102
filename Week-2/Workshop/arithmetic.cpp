#include <iostream>
#include <cmath>
#include <iterator>
using namespace std;

int binarytodecimal(long long number){
    int running_num = 0;
    int remainder;
    int i = 0;
    
    // int n = sizeof(array) - sizeof(array[0]);

    // for(int i = 0; i <= n; i++){

    //     running_num += (array[n-i] * pow(2, i));        
    // }
    while (number!=0){
        remainder = number % 10;
        number /= 10;
        running_num += remainder * pow(2, i);
        ++i;
    }
    return running_num;
}


int addednums(int a, int b){
    int base_10_nums_combined = a + b;

    // returning the numbers
    return base_10_nums_combined;
}

int subtractednums(int a, int b){
    int base_10_nums_subtracted = a - b;
    return base_10_nums_subtracted;
}

int numspushedleft(long long a){
    return 0;
}

int numspushedright(long long a){
    int nextnum = 0;
    int n = size_t(a) -  1;

    return 0;
}


int main(){
    int base_10_num = 26812;
    long long binarynum = 1101;
    int bin_number_converted = binarytodecimal(binarynum);
    // cout << bin_number_converted << endl;
    int addedtogether = addednums(base_10_num, bin_number_converted);
    int subtractedtogether = subtractednums(base_10_num, bin_number_converted);

    int pushedleft = numspushedleft(binarynum);
    int pushedright = numspushedright(binarynum);
    return 0;
}

