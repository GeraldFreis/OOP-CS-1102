#include <iostream>
#include <string>
#include <cmath>
#include <tuple>

using namespace std;

void returning_items_cost(char items[], int size, int* costptr){
    int cost_sum = 0;
    for(int i = 0; i < size; i++){
        if(i == 0){ // for milk
            cost_sum += items[i] * 1;
        }
        else if(i == 1){
            cost_sum += items[i] * 2;
        }
        else if(i == 2){
            cost_sum += items[i] * 3.5;
        }
        else if(i == 3){
            cost_sum += items[i] * 5;
        }
        else{
            continue;
        }
    }
    *costptr = cost_sum;
}

void items(char items[], int *numberptr, int *costptr){
    int number_of_items = sizeof(items) / sizeof(items[0]) / 2;
    returning_items_cost(items, number_of_items, costptr);
    *numberptr = number_of_items;
    // cout << *ptr << endl;
}


// returning the location of the number
// 1. create a location in the heap and point to this with a pointer
// 2. pass this pointer as an argument of the function
// 3. store the number value in that pointer
// 4. retrieve this location
void  basket(int *numberptr, int *costptr){
    // item array[0] = milk, array[1] = bread, array[2] = eggs, array[3] = beer
    char item_array[4] = {2, 3, 2, 2};

    items(item_array, numberptr, costptr);
}

void customer(){
    // auto customer_must_pay = basket[0];
    int items_number = 0;
    int items_cost = 0;
    int *number_of_items_pointer = new int;
    int *cost_of_items_pointer = new int;
    number_of_items_pointer = &items_number;
    cost_of_items_pointer = &items_cost;
    basket(number_of_items_pointer, cost_of_items_pointer);
    int number_of_items = *number_of_items_pointer;

    cout << "the customer must pay: $" << *cost_of_items_pointer << " for their " << number_of_items << " items" <<endl;

    delete number_of_items_pointer;
    delete cost_of_items_pointer;
}
