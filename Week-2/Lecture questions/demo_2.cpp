#include <iostream>
using namespace std;

int main(){
    int rows = 2;
    int columns = 2;
    int a[2][2] = {{1, 2}, {3, 4}};
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            cout << *(a[i]+j) << " ";
            cout << endl;
        }
    }
}