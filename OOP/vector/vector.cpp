#include <iostream>
#include "vector.h"

Vector::Vector (int length) {
    this->length = length * 2;
    _arr = new int [length];
    std::cout << "Hellooooooooooooo\n";
}

Vector::~Vector () {
    delete [] _arr;
    std::cout << "Byeeeeeeeeeeeeeee\n";
}

Vector::erace (int m) {
    int* arr = new int[m];
    if (m < length) {
        for (int i = 0; i < m; i++) {
            arr[i] = _arr[i];
        }
    } else {
        for (int i = 0; i < length; i++) {
            arr[i] = _arr[i];
        }
    }
    delete [] _arr;
    return arr;
}

Vector::operator[] (int index) {
    if (index > length){
        std::cout << "Bla bla bla\n";
    }
    return _arr[index];
}

Vector::findVector (int a) {
    for ( int i = 0; i < length; i++ ) {
        if (_arr[i] == a) {
            return i;
        }
    }
    return -1;
}

Vector::resizeVector (unsigned int n) {
    int m = n * 2;
    if (m == length) {
        return 0;
    } else if (m < length) {
        _arr = erace(m);
        length = m;
    } else {
        _arr = erace(m);
        length = m;
    }
}

Vector::shift (int m) {
    for (int i = length; i > m; i--) {
        _arr[i] = _arr[i-1];
    }
}

Vector::insertVector (int index, int c) {
    shift(index);
    _arr[index] = c;
}

Vector::shiftRemove (int m) {
    for (int i = m; i < length - 1; i++) {
        _arr[i] = _arr[i+1];
    }
    _arr[i] = 0;
}

Vector::removeVector (int index) {
    shiftRemove(index);
}
