#include <iostream>
#include "recursive-sum.hpp"

int main() {

    int array[] = {1,2,3,4,5};

    std::cout << "The sum of 1,2,3,4,5 is: " << recursiveSum2(array, 0, 5) << std::endl;

    std::cout << "The largest number of 1,2,3,4,5 is: " << recursiveFindLargestInt(array, 5) << std::endl;


    return 0;
}