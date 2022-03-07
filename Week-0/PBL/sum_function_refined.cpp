#include <iostream>
using namespace std;

int checker(int n){
    for(int x=0; x < n; x++){
        for(int y = 0; y < n; y++){
            for(int a = 0 ; a < n; a++){
                for(int z = 0; z < n; z++){
                    if(((x+y+a+z) == n) and ((x+2)+(y-2)+(2*a)+(z/2) == 45) and (x != y) and (x != a) and (x != z) and (y != a) and (y != z) and (a != z)){
                        printf("%d + 2 + %d - 2 + 2 * %d + %d / 2 = 45 \n", x, y, a, z);
                    }
                }
            }
        }
    }
    return 0;
}