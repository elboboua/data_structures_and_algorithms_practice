#include <iostream>
#include "linked-list.hpp"


int main() {

    LinkedList * stack = new LinkedList();

    std::cout << "Is the stack empty? " << (stack->empty()? "Yes": "No") << std::endl;
    std::cout << "Let's add some values" << std::endl;

    for (int i = 0; i < 50; i+=2) {
        stack->push(i);
    }
    std::cout << "Printing the stack:" << std::endl;
    stack->print();
    std::cout << "What's the element on top of the stack? " << stack->getTop() << std::endl;
    std::cout << "Let's pop it and then reprint the stack." << std::endl;
    stack->pop();
    stack->print();

    //std::cout << "" << << std::endl;


    return 0;
}