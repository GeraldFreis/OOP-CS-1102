#include <iostream>
using namespace std;

int checker(int n){
    for(int x=0; x < n; x++){
        for(int y = 0; y < n; y++){
            for(int a = 0 ; a < n; a++){
                for(int z = 0; z < n; z++){
                    if(((x+2+y-2+a*2+z/2) == n)){
                        printf("%d + 2 + %d - 2 + 2 * %d + %d / 2 = 45 \n", x, y, a, z);
                    }
                }
            }
        }
    }
    return 0;
}