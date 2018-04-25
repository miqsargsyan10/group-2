#include <iostream>
#include "queue.h"

Queue::Queue (int n) {
    length = 0;
    this->n = n;
    _arr = new int [n];
    std::cout << "Hellooooooooooooo\n";
}

Queue::~Queue () {
    delete [] _arr;
    std::cout << "Byeeeeeeeeeeeeeee\n";
}

void Queue::push (int a) {
    if (length < n) {
        _arr[n - ++length] = a;
    } else {
        std::cout << "Queue is full!!\n";
    }
}

void Queue::pop () {
    if (length > 0) {
        int i = n - 1;
        std::cout << "Pop number is " << _arr[i] << std::endl;
        while (i > n - length) {
            _arr[i] = _arr[i-1];
            i--;
        }
        _arr[i] = 0;
        length--;
    } else {
        std::cout << "Queue is empty!!\n";   
    }
}

int Queue::size () {
    return length;
}

bool Queue::isEmpty() {
    return !(length);
}
