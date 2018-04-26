#include <iostream>

int main (){    
    int snickersCount = 2;
    float snickersPrice = 1.5;
    int hamburgerCount = 2;
    float hamburgerPrice = 2.6;
    int colaCount = 2;
    float colaPrice = 1.2;
    float pandaKg = 0.5;
    int pandaPrice = 6;
    float roshenKg = 0.2;
    int roshenPrice = 13;
    int juiceLiter = 4;
    float juicePrice = 3.3;
    int breadCount = 4;
    float breadPrice = 0.3;
    int vodkaLiter = 2;
    int vodkaPrice = 10;
    float cableLength = 3.5;
    int cablePrice = 2;
    float sum = snickersCount * snickersPrice + hamburgerCount * hamburgerPrice + colaCount * colaPrice + pandaKg * pandaPrice + roshenKg * roshenPrice + juiceLiter * juicePrice + breadCount * breadPrice + vodkaLiter * vodkaPrice + cableLength * cablePrice;
    std::cout << "Total price is: ";
    std::cout << sum << "\n";
}
