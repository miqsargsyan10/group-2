#include <iostream>

int main(){
    int first, last, sumEven = 0;
    std::cout << "Input first: ";
    std::cin >> first;
    std::cout << "Input last: ";
    std::cin >> last;
    if ( last < first ) {
        std::cout << "Error...Retry!!! \n";
    } else {
        for ( int i = first; i <= last; i++ ) {
            if ( i % 2 == 0 ) {
                sumEven += i;
            }
        }
    std::cout << "Sum of even numbers = " << sumEven << std::endl;
    }
}
