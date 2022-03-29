#include <iostream>
using namespace std;

int *readNumbers(){
    int *arr = new int[10];
    cout << "enter 10 numbers: " << endl;

    for(int i = 0; i < 9; i++){
        
        cin >> arr[i];
    }
    return arr;
}

void printNumbers(int *numbers,int length){
    for(int i = 0; i < length; i++){
        cout << i << numbers[i] << endl;
    }
}

void hexDigits(int *numbers,int length){
    char *new_array = new char[10];
    for(int i = 0; i < length; i++){
        switch (numbers[i]){
            case 1:
                new_array[i] = 1;
                break;
            case 2:
                new_array[i] = 2;
                break;
            case 3:
                new_array[i] = 3;
                break;
            case 4:
                new_array[i] = 4;
                break;
            case 5:
                new_array[i] = 5;
                break;
            case 6:
                new_array[i] = 6;
                break;
            case 7:
                new_array[i] = 7;
                break;
            case 8:
                new_array[i] = 8;
                break;
            case 9:
                new_array[i] = 9;
                break;
            case 10:
                new_array[i] = 'A';
                break;
            case 11:
                new_array[i] = 'B';
                break;
            case 12:
                new_array[i] = 'C';
                break;
            case 13:
                new_array[i] = 'D';
                break;
            case 14:
                new_array[i] = 'E';
                break;
            case 15:
                new_array[i] = 'F';
                break;
        }
    }
     for(int i = 0; i < length; i++){
        cout << i << " " << numbers[i] << " " << new_array[i] << endl;
    }
    delete [] numbers;
    delete [] new_array;
}
