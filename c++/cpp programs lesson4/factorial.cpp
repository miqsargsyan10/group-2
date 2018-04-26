#include <iostream>
#include <string>

int factorial( int n ){
    if ( n <= 0 ) {
        return 1;
    } else if ( n == 1 ) {
        return 1;
    } else {
        return n * factorial( n - 1 ); //change ( n - 1 ) with ( n - 2 ) for !! *_-
    }
}

int main(){
    int n;
    std::cout << "Input a number: ";
    std::cin >> n;
    if ( factorial( n ) < 0 || n == 0 ) {
        std::cout << "You input wrong number.Try again! \n";
    } else {
        std::cout << "n! = " << factorial( n ) << std::endl;
    }
}