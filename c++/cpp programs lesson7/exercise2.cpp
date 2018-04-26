#include <iostream>

int main(){
    int arr[] = {1, 11, 12, 13, 14, 15, 17, 21, 23, 42, 44, 45, 46, 47, 50, 51, 55, 58, 59, 67, 87, 98, 100};
    int low = 0, high = 22;
    int middle = ( high + low ) / 2;
    int searchNumber, step = 0;
    std::cout << "Input search number: ";
    std::cin >> searchNumber;
    while ( searchNumber != arr[middle] ) {
        if ( searchNumber < arr[middle] ) {
            high = middle;
            middle = ( high + low ) / 2;
        } else if ( searchNumber > arr[middle] ) {
            low = middle;
            middle = ( high + low ) / 2;
        }
        step++;
        if ( step > 5 ) {
            break;
        }
    }
    if ( step > 5 ) {
            std::cout << "No result...Try again!!! \n";
    } else {
        std::cout << "index of search result = " << middle << std::endl;
    }
}
