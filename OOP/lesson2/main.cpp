#include <iostream>
#include "stack.cpp"

int main () {
    Point x(0.0, 0.0);
    Point z(16.0, 12.1);
    Sector i( x, z );
    i.printXY();
    std::cout << "----------------------\n";
    Rectangle b(x, z);
    std::cout << "S = " << b.sRectangle() << std::endl;
    std::cout << "P = " << b.pRectangle() << std::endl;
    std::cout << "H = " << b.sideA() << std::endl;
    std::cout << "W = " << b.sideB() << std::endl;
    std::cout << "----------------------\n";
    Rectangle rectangle(z, x);
    Rectangle* newRectangle = &rectangle;
    std::cout << "Surface of rectangle is " << (*newRectangle).sRectangle() << std::endl;
    std::cout << "Perimeter of rectangle is " << newRectangle->pRectangle() << std::endl;
    std::cout << "Height of rectangle is " << (*newRectangle).sideA() << std::endl;
    std::cout << "width of rectangle is " << (*newRectangle).sideB() << std::endl;
    std::cout << "----------------------\n";
    std::cout << "Now we copy new rectangle...\n";
    std::cout << "----------------------\n";
    Rectangle c = rectangle;
    std::cout << "Surface of copy rectangle is " << c.sRectangle() << std::endl;
    std::cout << "Perimeter of copy rectangle is " << c.pRectangle() << std::endl;
    std::cout << "Height of copy rectangle is " << c.sideA() << std::endl;
    std::cout << "width of copy rectangle is " << c.sideB() << std::endl;
    std::cout << "----------------------\n";
    Point* aaa = &rectangle;
    aaa->foo();
    aaa->boo();
    std::cout << "----------------------\n";
}