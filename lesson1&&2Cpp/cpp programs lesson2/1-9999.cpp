#include <iostream>
#include <string>

int main () {
    int number;
    std::cout << "Mutqagreq tiv 1-9999 mijakayqic!!! \n";
    std::cin >> number;
    if ( number < 1 && number > 9999 ) {
        std::cout << "Duq mutqagrel eq sxal tiv: Xndrum enq porcel noric...";
    } else {
        int a = number / 1000, b = ( number  - a * 1000 ) / 100, c = ( number - ( a * 1000 + b * 100 ) ) / 10, d = number % 10;
        switch ( a ) {
            case 1:
                std::cout << "hazar ";
                break;
            case 2:
                std::cout << "erku hazar ";
                break;
            case 3:
                std::cout << "ereq hazar ";
                break;
            case 4:
                std::cout << "chors hazar ";
                break;
            case 5:
                std::cout << "hing hazar ";
                break;
            case 6:
                std::cout << "vec hazar ";
                break;
            case 7:
                std::cout << "yot hazar ";
                break;
            case 8:
                std::cout << "ut hazar ";
                break;
            case 9:
                std::cout << "inny hazar ";
                break;
        }
        switch ( b ) {
            case 1:
                std::cout << "harur ";
                break;
            case 2:
                std::cout << "erku harur ";
                break;
            case 3:
                std::cout << "ereq harur ";
                break;
            case 4:
                std::cout << "chors harur ";
                break;
            case 5:
                std::cout << "hing harur ";
                break;
            case 6:
                std::cout << "vec harur ";
                break;
            case 7:
                std::cout << "yot harur ";
                break;
            case 8:
                std::cout << "ut harur ";
                break;
            case 9:
                std::cout << "inny harur ";
                break;
        }
        switch ( c ) {
            case 1:
                std::cout << "tas ";
                break;
            case 2:
                std::cout << "qsan ";
                break;
            case 3:
                std::cout << "eresun ";
                break;
            case 4:
                std::cout << "qarasun ";
                break;
            case 5:
                std::cout << "hisun ";
                break;
            case 6:
                std::cout << "vatsun ";
                break;
            case 7:
                std::cout << "yotanasun ";
                break;
            case 8:
                std::cout << "utanasun ";
                break;
            case 9:
                std::cout << "innasun ";
                break;
        }
        switch ( d ) {
            case 0:
                std::cout << std::endl;
                break;
            case 1:
                std::cout << "mek" << std::endl;
                break;
            case 2:
                std::cout << "erku" << std::endl;
                break;
            case 3:
                std::cout << "ereq" << std::endl;
                break;
            case 4:
                std::cout << "chors" << std::endl;
                break;
            case 5:
                std::cout << "hing" << std::endl;
                break;
            case 6:
                std::cout << "vec" << std::endl;
                break;
            case 7:
                std::cout << "yot" << std::endl;
                break;
            case 8:
                std::cout << "ut" << std::endl;
                break;
            case 9:
                std::cout << "inny" << std::endl;
                break;
        }
    }
    return 0;
}
