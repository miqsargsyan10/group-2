#include <iostream>
#include <cstdlib>

int main(){
    int arr[30];
    for ( int i = 0; i < 30; i++ ) {
        arr[i] = rand() % 100;
    }
    int searchNumber, nonsensicalNumber = 0;
    std::cout << "Enter a serch number: ";
    std::cin >> searchNumber;
    for ( int i = 0; i < 30; i++ ) {
        if ( arr[i] == searchNumber ) {
            std::cout << "index = " << i << "; \n";
        } else {
            nonsensicalNumber += 1;
        }
    }
    if ( nonsensicalNumber == 30 ) {
        std::cout << "No results...Try again!!! \n";
    }
    std::cout << "[ ";
    for ( int i = 0; i < 30; i++ ) {
        if ( i % 10 == 0 && i > 0) {
            std::cout << std::endl;
        }
        if ( i < 29 ) {
            std::cout << arr[i] << ", ";
        } else {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "]";
}
