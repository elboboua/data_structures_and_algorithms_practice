#include <iostream>
#include "calculate-factorial.hpp"

int main() {

    std::cout << "The factorial of 2: " << calculateFactorial(2) << std::endl;
    std::cout << "The factorial of 3: " << calculateFactorial(3) << std::endl;
    std::cout << "The factorial of 4: " << calculateFactorial(4) << std::endl;
    std::cout << "The factorial of 5: " << calculateFactorial(5) << std::endl;

    std::cout << "The factorial of 2: " << recursiveCalculateFactorial(2) << std::endl;
    std::cout << "The factorial of 3: " << recursiveCalculateFactorial(3) << std::endl;
    std::cout << "The factorial of 4: " << recursiveCalculateFactorial(4) << std::endl;
    std::cout << "The factorial of 5: " << recursiveCalculateFactorial(5) << std::endl;

    return 0;
}