#include "BookStores.h"

void BookStores::sort(Dymocks **store, int n){      // sorts the array of n Dymocks in ascending 
                                              // order base on their storeID
    // sorting the array
    bool test = false;
    while(test == false){
        int randnum = rand() % (n-1);

        if(store[randnum]->get_storeID() > store[randnum-1]->get_storeID()){
            swap(store[randnum], store[randnum-1]);
        }

        // checking if sorted
        Dymocks *last_val = store[0];
        for(int i = 1; i < n; i++){
            if(last_val->get_storeID() > store[i]->get_storeID() && i != n - 1){
                break;
            }
            else if (last_val->get_storeID() < store[i]->get_storeID() && i != n - 1){
                last_val = store[i];
            }
            else if(last_val->get_storeID() < store[i]->get_storeID() && i == n - 1){
                test = true;
            }
            else {
                break;
            }
        }
    }
}