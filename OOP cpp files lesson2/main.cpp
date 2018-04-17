#include <iostream>
#include "classes.cpp"

int main () {
    Sector a( 1.0, 1.0, 5.0, 3.1 );
    a.printXY();

    Rectangle b(7, 5, 2, 0);
    std::cout << "S = " << b.getS() << std::endl;
    std::cout << "P = " << b.getP() << std::endl;
    std::cout << "H = " << b.getH() << std::endl;
    std::cout << "W = " << b.getW() << std::endl;
}
