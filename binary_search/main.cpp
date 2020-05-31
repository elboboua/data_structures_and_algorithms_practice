#include <iostream>
#include "binary-search.hpp"

int main () {

    // create array to search
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    // search for 4
    std::cout << "Is the number 3 present? " << (binarySearch(array, 10, 3) > -1? "Yes": "No") << std::endl;
    std::cout << "Is the number 11 present? " << (binarySearch(array, 10, 11) > -1? "Yes": "No") << std::endl;


    return 0;
}