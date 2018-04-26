#include <iostream>

int main(){
    int arrSize = 10, item, sumEven = 0, sumOdd = 0;
    int arr[arrSize];
    for ( int i = 0; i < arrSize; i++ ) {
        std::cout << "Enter a item(number) for array: ";
        std::cin >>  item;
        arr[i] = item;
        if ( item % 2 == 0 ) {
            sumEven += item;
        } else {
            sumOdd += item;
        }
    }
    int maxArr = arr[0], minArr = arr[0];
    for ( int i = 1; i < arrSize; i++ ) {
        if ( maxArr < arr[i] ) {
            maxArr = arr[i];
        }
        if ( minArr > arr[i] ) {
            minArr = arr[i];
        }
    }
    std::cout << "Sum of even numbers = " << sumEven << std::endl;
    std::cout << "Sum of odd numbers = " << sumOdd << std::endl;
    std::cout << "Minimum number in array is " << minArr << std::endl;
    std::cout << "Maximum number in array is " << maxArr << std::endl;
}
