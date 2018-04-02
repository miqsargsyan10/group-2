#include <iostream>

void printNumbers(int n) {
    if ( n <= 0 ) {
        return;
    }
    std::cout << n << " ";
    printNumbers( n - 1 );
    return;
}

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    printNumbers( n );
    return 0;
}