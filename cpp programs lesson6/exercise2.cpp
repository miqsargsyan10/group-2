#include <iostream>

int main(){
    int arr[5][5];
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            arr[i][j] = rand() % 20 + 1;
        }
    }
    for ( int i = 0; i < 5; i++ ) {
        std::cout << "[ ";
        for ( int j = 0; j < 5; j++ ) {
            std::cout << arr[i][j];
            if ( arr[i][j] < 10 ) {
                std::cout << "  ";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "]" << std::endl;
    }
    int sumDiaganal1 = 0, sumDiaganal2 = 0, sumDiaganalTop1 = 0, sumDiaganalBottom1 = 0, sumDiaganalTop2 = 0, sumDiaganalBottom2 = 0;
    for ( int i = 0; i < 5; i++ ) {
        sumDiaganal1 += arr[i][i];
        sumDiaganal2 += arr[i][4-i];
        for ( int j = 0; j < 5; j++ ) {
            if ( j > i ) {
                sumDiaganalTop1 += arr[i][j];
            } else if ( j < i ) {
                sumDiaganalBottom1 += arr[i][j];
            }
            if ( j > 4 - i) {
                sumDiaganalBottom2 += arr[i][j];
            } else if ( j < 4 - i ) {
                sumDiaganalTop2 += arr[i][j];
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Sum diaganal 1 = " << sumDiaganal1 << std::endl;
    std::cout << "Sum diaganal 2 = " << sumDiaganal2 << std::endl;
    std::cout << std::endl;
    std::cout << "Sum diaganal top 1 = " << sumDiaganalTop1 << std::endl;
    std::cout << "Sum diaganal bottom 1 = " << sumDiaganalBottom1 << std::endl;
    std::cout << std::endl;
    std::cout << "Sum diaganal top 2 = " << sumDiaganalTop2 << std::endl;
    std::cout << "Sum diaganal bottom 2 = " << sumDiaganalBottom2 << std::endl;
}