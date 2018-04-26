#include <iostream>

int main(){
    int height;
    std::cout << "Input heigth: ";
    std::cin >> height;
    std::cout << "\n";

    for ( int i = 1; i <= height; i++ ) {
        for (int j = 1; j <= height; j++) {
            if ( i <= j ) {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    for ( int i = 1; i <= height; i++ ) {
        for (int j = 1; j <= height; j++) {
            if ( i >= j ) {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    for ( int i = 1; i <= height; i++ ) {
        for ( int j = 1; j <= height; j++ ) {
            if ( i <= j ) {
                std::cout << " ";
            }
        }
        for ( int z = 1; z <= height; z++ ) {
            if ( i >= z ) {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    for ( int i = 1; i <= height; i++ ) {
        for ( int j = 1; j <= height; j++ ) {
            if ( i >= j ) {
                std::cout << " ";
            }
        }
        for ( int z = 1; z <= height; z++ ) {
            if ( i <= z ) {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    for ( int i = 1; i <= height; i++ ) {
        for ( int j = 1; j <= height*2; j++ ) {
            if ( i >= j ) {
                std::cout << " ";
            }
        }
        for ( int z = 1; z <= height*2; z++ ) {
            if ( 2*i <= z ) {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    for ( int i = height; i >= 1; i-- ) {
        for ( int j = 1; j <= height*2; j++ ) {
            if ( i >= j ) {
                std::cout << " ";
            }
        }
        for ( int z = 1; z <= height*2; z++ ) {
            if ( 2*i <= z ) {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
}
