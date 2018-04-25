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

int* Vector::erace (int m) {
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

int& Vector::operator[] (int index) {
    if (index > length){
        std::cout << "Bla bla bla\n";
    }
    return _arr[index];
}

int Vector::findVector (int a) {
    for ( int i = 0; i < length; i++ ) {
        if (_arr[i] == a) {
            return i;
        }
    }
    return -1;
}

void Vector::resizeVector (unsigned int n) {
    int m = n * 2;
    if (m == length) {
        return;
    } else if (m < length) {
        _arr = erace(m);
        length = m;
    } else {
        _arr = erace(m);
        length = m;
    }
}

void Vector::shift (int m) {
    for (int i = length; i > m; i--) {
        _arr[i] = _arr[i-1];
    }
}

void Vector::insertVector (int index, int c) {
    shift(index);
    _arr[index] = c;
}

void Vector::shiftRemove (int m) {
    int i = m;
    while (i < length - 1) {
        _arr[i] = _arr[i+1];
	i++;
    }
    _arr[i] = 0;
}

void Vector::removeVector (int index) {
    shiftRemove(index);
}
