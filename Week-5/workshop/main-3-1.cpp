#include <iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *,int *,int);

int main(){
    int *arr1 = readNumbers();
    int *arr2 = readNumbers();

    cout << equalsArray(arr1, arr2, 10) << endl;
    delete [] arr1;
    delete [] arr2;
    return 0;
}