#include <iostream>
using namespace std;

int checker(int n){
    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y ++){
            for(int w = 0; w < n; w++){
                for(int z = 0; z < n; z ++){
                    if((x + y + w + z) == 45){
                        printf("%d + %d + %d + %d = 45 \n", x, y, w, z);
                    }
                }
            }
        }
    }
    return 0;
}