#!/usr/bin/env python3
import math
class Circle(object):
    def __init__(self, radius):
        self.radius = radius
    def __str__(self):
        return "Radius of circle is " + str(self.radius)
    def setRadius(self, newRadius):
        self.radius = newRadius
    def area(self):
        return self.radius ** 2 * math.pi
    def perimeter(self):
        return 2 * math.pi * self.radius

obj = Circle(5)
print(obj)
print("Area of circle is " + str(obj.area()))
print("Perimeter of circle is " + str(obj.perimeter()))
obj.setRadius(6)
print(obj)
print("Area of circle is " + str(obj.area()))
print("Perimeter of circle is " + str(obj.perimeter()))

