#include <iostream>
#include "vector.h"

int main () {
    Vector vector(2);
    vector.insertVector(0, 10);
    vector.insertVector(1, 30);
    vector.insertVector(2, 20);
    std::cout << "Index of 30 is " << vector.findVector(30) << std::endl;
    std::cout << "Remove item who index is 1(it's 30)\n";
    vector.removeVector(1);
    std::cout << "Index of 20 is " << vector.findVector(20) << std::endl;
    std::cout << "Now I change size vector!!\n";
    vector.resizeVector(1);
    std::cout << "Item who index is 0 is " << vector.operator[](0) << std::endl;
    return 0;
}
