#include <iostream>

void decomposition( int n ){
    if ( n > 0 ) {
        std::cout << n % 10;
        decomposition( n / 10 );
    }
}

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    decomposition(n);
    return 0;
}