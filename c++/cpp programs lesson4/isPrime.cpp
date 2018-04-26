#include <iostream>

bool isPrime( int n, int d ){
    if ( d == 1 ) {
        return true;
    } else {
        if ( n % d == 0 ) {
            return false;
        } else {
            return isPrime( n, d - 1 );
        }
    }
}

int main(){
    unsigned int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if ( isPrime( n, n / 2 ) == true ) {
        std::cout << "Number is prime \n";
    } else {
        std::cout << "Number is not prime \n";
    }
}