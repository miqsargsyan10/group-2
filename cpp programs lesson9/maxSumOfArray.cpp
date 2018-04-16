#include <iostream>
#include <stdlib.h>

int main()
{
    srand (time(NULL));
    int arrLength, maxSum = -66000, maxNum = 0, firstIndex = -1, lastIndex;
    std::cout << "Input length array: ";
    std::cin >> arrLength;
    int a[arrLength];
    for ( int i = 0; i < arrLength; i++ ) {
        a[i] = rand() % 21 - 10;
    }
    for ( int i = 0; i < arrLength; i++ )
    {
        maxNum = maxNum + a[i];
        if ( maxSum < maxNum ) {
            maxSum = maxNum;
            lastIndex = i;
        }
        if ( maxNum < 0 ) {
            maxNum = 0;
            firstIndex = i;
        }
    }
    std::cout << "Maximum contiguous sum is " << maxSum << std::endl;
    for ( int i = 0; i < arrLength; i++ ) {
    std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "First index is " << firstIndex + 1 << "\nLast index is " << lastIndex << std::endl;
    return 0;
}