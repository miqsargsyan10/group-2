#include <iostream>
#include <math.h>

class Point{
    private:
        double x, y;
    public:
        Point( double x, double y ):x(x), y(y) {}
        Point ( const Point &object ) {
            x = object.x;
            y = object.y;
        }
        ~Point(){}
        void setX( double x ) {
            this->x = x;
        }
        void setY( double y ) {
            this->y = y;
        }
        double getX() {
            return x;
        }
        double getY() {
            return y;
        }
};

class Rectangle: public Point{
    private:
        double h, w;
    public:
        Rectangle ( double height, double width, double x, double y ):Point (x, y) {
            h = height;
            w = width;
        }
        Rectangle ( const Rectangle &object ): Point(object) {
            h = object.h;
            w = object.w;
        }
        ~Rectangle(){}
        double getS(){
            return h * w;
        }
        double getP(){
            return h * 2 + w * 2;
        }
        double getH(){
            return h;
        }
        double getW(){
            return w;
        }
        void setH( double height ) {
            h = height;
        }
        void setW( double width ) {
            w = width;
        }
};

class Triangle: public Point{
    private:
        double a, b, c;
    public:
        Triangle ( double a, double b, double c, double x, double y ): Point(x, y) {
            this->a = a;
            this->b = b;
            this->c = c;
        }
        Triangle ( const Triangle &object ):Point(object) {
            a = object.a;
            b = object.b;
            c = object.c;
        }
        ~Triangle(){}
        void setA( double a ) {
            this->a = a;
        }
        void setB( double b ) {
            this->b = b;
        }
        void setC( double c ) {
            this->c = c;
        }
        double getA(){
            return a;
        }
        double getB(){
            return b;
        }
        double getC(){
            return c;
        }
        double getP(){
            return a + b + c;
        }
        double getS(){
            double p = ( a + b + c ) / 2.0;
            double s = p * ( p - a ) * ( p - b ) * ( p - c );
            return sqrt( s );
        }
};

class Sector: public Point {
    private:
        double x2, y2;
    public:
        Sector( double x1, double y1, double x2, double y2 ): Point(x1, y1) {
            this->x2 = x2;
            this->y2 = y2;
        }
        ~Sector(){}
        void setX2( double x2) {
            this->x2 = x2;
        }
        void setY2( double y2) {
            this->y2 = y2;
        }
        double getX2() {
            return x2;
        }
        double getY2() {
            return y2;
        }
        void printXY(){
            double x1 = getX(), y1 = getY();
            double k = ( y2 - y1 ) / ( x2 - x1 );
            double b = y1 - k * x1;
            for(int x = x1; x <= x2 ; x += 1) {
                std::cout << "If x = " << x << std::endl;
                std::cout << "Y = " << k * x + b << std::endl;
            }
        }
};
