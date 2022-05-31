#include "sort_by_animalID.h"


void sort_by_animalID::sort(animal **animals, int n){	// sorts the array of n animals into ascending order using their animalIDs
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
        {
            swapped = false;
            for (j = 0; j < n-i-1; j++)
                {
                    if (animals[j]->get_animalID() > animals[j+1]->get_animalID())
                    {
                        animal *tempan = animals[j+1];
                        animals[j+1] = animals[j];
                        animals[j] = tempan;
                        swapped = true;
                    }
                }
    
     // IF no two elements were swapped
     // by inner loop, then break
        if (swapped == false)
            break;
    }
    // for(int i = 0; i < n; i++){
    //     cout << 
    // }
}