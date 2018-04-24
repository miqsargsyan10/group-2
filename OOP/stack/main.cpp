#include <iostream>
#include "stack.h"

int main(){
    unsigned int n;
    std::cout << "Input length Stack!! ";
    std::cin >> n;
    Stack a(n);
    std::cout << "Size stack " << a.sizeArr() << std::endl;
    while (true) {
        int pushNumber;
        std::cout << "Input a push number or 0 for exit: ";
        std::cin >> pushNumber;
        if ( pushNumber == 0 ) {
            break;
        }
        a.push(pushNumber);
    }
}
