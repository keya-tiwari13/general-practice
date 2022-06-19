#include <iostream>
#ifndef MARMOSET_TESTING
int main();
#endif

int *add_element (int * array, std::size_t & capacity, int value_to_add);
int *remove_element (int * array, std::size_t & capacity, int value_to_remove);

#ifndef MARMOSET_TESTING
int main(){
    int *array = new int[5]{1, 2, 3, 5, 6};
    std::size_t capacity{5};
    int *new_array = remove_element(array, capacity, 5);
    for(int i{}; i < capacity; i++){
        std::cout << new_array[i] << " ";
    }
    return 0;
}
#endif

int *add_element (int * array, std::size_t & capacity, int value_to_add){
    capacity++;
    int *tmp = new int[capacity];
    int position{0};

    if (value_to_add > array[capacity-2]) {
        position = capacity - 1;
    } else {
        while (value_to_add < array[position]) {
            position++;
        }
    }

    for (int i{0}; i<position; ++i) {
        tmp[i] = array[i];
    } 

    tmp[position] = value_to_add;
    for (int i{position}; i<capacity; ++i) {
        tmp[i] = array[i-1];
    }

    delete[] array;
    array = nullptr;
    return tmp;
}

int *remove_element (int * array, std::size_t & capacity, int value_to_remove){
    capacity--;
    int *tmp = new int[capacity];
    int position{0};

    if (value_to_remove > array[capacity-1]) {
        position++;
    }

    for (int i{0}; i<position; ++i) {
        tmp[i] = array[i];
    }

    for (int i{position}; i<capacity; ++i) {
        tmp[i] = array[i+1];
    }

    delete[] array;
    array = nullptr;
    return tmp;
}


