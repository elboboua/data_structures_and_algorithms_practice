#include <iostream>
#include "selection-sort.hpp"

void printArray(int array[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}


int main() {

    int const SIZE = 20;
    int array[SIZE] = {245,654,234,5,234,3,12,5,324,623,235,65,234,65,234,532,234,6432,234,542};

    // print before sort
    printArray(array, SIZE);

    // print after sort
    sSort(array, SIZE);
    printArray(array, SIZE);

    return 0;
}