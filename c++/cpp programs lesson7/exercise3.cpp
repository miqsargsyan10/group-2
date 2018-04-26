#include <iostream>
#include <cstdlib>

int main(){
    int arr[30];
    for ( int i = 0; i < 30; i++ ) {
        arr[i] = rand() % 100;
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

    for ( int i = 0; i < 30; i++ ) {
        for ( int j = 0; j < 29; j++ ) {
            if ( arr[j] > arr[j+1] ) {
                arr[j] += arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] -= arr[j+1];
            }
        }
    }

    std::cout << "\n \n";
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
    std::cout << "] \n";
}
