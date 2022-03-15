#include <iostream>
using namespace std;

int main(){
    int array[4] = {1, 2, 3, 4};
    int *ptr = &array[0];
    
    for(int i = 0; i < 4; i++){
        cout << *(ptr+i) << endl;
    }
}