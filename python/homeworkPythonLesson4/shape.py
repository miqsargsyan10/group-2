#!/usr/bin/env python3
import math

class Shape(object):
    def __lt__(self, other):
        return self.circum() < other.circum()
    def __eq__(self, other):
        return self.area() == other.area()

class Rectangle(Shape):
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def __str__(self):
        return "Rectangle: " + str(self.a * self.b)
    def circum(self):
        return self.a * 2 + self.b * 2
    def area(self):
        return self.a * self.b

class Square(Rectangle):
    def __init__(self, a):
        Rectangle.__init__(self, a, a)
    def __str__(self):
        return "Square: a = " + str(a)

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius
    def __str__(self):
        return "Circle: Diameter of circle is " + str(self.radius * 2)
    def __lt__(self, other):
        return self.radius < other.radius
    def circum(self):
        return 2 * math.pi * self.radius
    def area(self):
        return math.pi * self.radius ** 2

square1 = Square(3)
print(square1.circum()) # 12.0
square2 = Square(4)
print(square1 > square2) # False
rectangle1 = Rectangle(4, 4)
print(square2 == rectangle1) # True
circle1 = Circle(5)
print(square1 < circle1) # True
