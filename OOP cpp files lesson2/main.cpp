#include <iostream>
#include "classes.cpp"

int main () {
    Sector a( 0.0, 0.0, 16.0, 12.1 );
    a.printXY();
    std::cout << "----------------------\n"; 	
    Rectangle b(10, 5, 2, 0);
    std::cout << "S = " << b.getS() << std::endl;
    std::cout << "P = " << b.getP() << std::endl;
    std::cout << "H = " << b.getH() << std::endl;
    std::cout << "W = " << b.getW() << std::endl;
    std::cout << "----------------------\n";
    Rectangle rectangle(10, 20, 0, 0);
    Rectangle* newRectangle = &rectangle;
    std::cout << "Surface of rectangle is " << (*newRectangle).getS() << std::endl;
    std::cout << "Perimeter of rectangle is " << newRectangle->getP() << std::endl;
    std::cout << "Height of rectangle is " << (*newRectangle).getH() << std::endl;
    std::cout << "width of rectangle is " << (*newRectangle).getW() << std::endl;
    std::cout << "----------------------\n";
    std::cout << "Now we change width and height of rectangle\n";
    std::cout << "----------------------\n";
    (*newRectangle).setW(5.025);
    (*newRectangle).setH(12.3);
    std::cout << "Surface of rectangle is " << (*newRectangle).getS() << std::endl;
    std::cout << "Perimeter of rectangle is " << (*newRectangle).getP() << std::endl;
    std::cout << "Height of rectangle is " << (*newRectangle).getH() << std::endl;
    std::cout << "width of rectangle is " << (*newRectangle).getW() << std::endl;
    std::cout << "----------------------\n";
    std::cout << "Now we copy new rectangle...\n";
    std::cout << "----------------------\n";
    Rectangle c = rectangle;
    std::cout << "Surface of copy rectangle is " << c.getS() << std::endl;
    std::cout << "Perimeter of copy rectangle is " << c.getP() << std::endl;
    std::cout << "Height of copy rectangle is " << c.getH() << std::endl;
    std::cout << "width of copy rectangle is " << c.getW() << std::endl;
    std::cout << "----------------------\n";
    Point* aaa = &rectangle;
    aaa->foo();
    aaa->boo();
    std::cout << "----------------------\n";
}
