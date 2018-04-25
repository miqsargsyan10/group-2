#include <iostream>
#include "stack.h"

Stack::Stack (unsigned int n) {
    top = -1;
    sizeStack = 0;
    this->n = n;
    arr = new int [n];
    std::cout << "Hello\n";
}
Stack::~Stack () {
    delete [] arr;
    std::cout << "Bye bye\n";
}
int Stack::sizeArr () {
    return sizeStack;
}
void Stack::push ( int number ) {
    if ( sizeStack < n ) {
        top = sizeStack++;
        arr[top] = number;
    } else {
        std::cout << "Sorry but stack is full!!\n";
    }
}
void Stack::pop () {
    if ( sizeArr() > 0 ) {
        int popNumber = arr[top];
        arr[top] = 0;
        sizeStack = top;
        top--;
        std::cout << "Removed integer is " << popNumber << std::endl;
    } else {
        std::cout << "Sorry but stack is empty!!\n";
    }
}
bool Stack::isEmpty () {
    return !(sizeArr());
}
