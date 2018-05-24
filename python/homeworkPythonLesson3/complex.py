#!/usr/bin/env python3
class Complex(object):
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def __str__(self):
        if self.a == 0 and self.b == 0:
            return "0"
        elif self.a == 0:
            return str(self.b) + "i"
        elif self.b == 0:
            return str(self.a)
        return str(self.a) + " + " + str(self.b) + "i"
    def __add__(self, other):
        return  Complex(self.a + other.a, self.b + other.b)
    def __sub__(self, other):
        return Complex(self.a - other.a, self.b - other.b)
    def __mul__(self, other):
        return Complex(self.a * other.a - self.b * other.b, self.a * other.b + self.b * other.a)
    def __truediv__(self, other):
        return Complex((self.a * other.a + self.b * other.b) / (other.a ** 2 + other.b ** 2), (self.b * other.a - self.a * other.b) / (other.a ** 2 + other.b ** 2))
    def __eq__(self, other):
        return self.a == other.a and self.b == other.b
    def __ne__(self, other):
        return not (self.a == other.a and self.b == other.b)
    def __lt__(self, other):
        return self.absolute() < other.absolute()
    def __gt__(self, other):
        return self.absolute() > other.absolute()
    def __le__(self, other):
        return self.absolute() <= other.absolute()
    def __ge__(self, other):
        return self.absolute() >= other.absolute()
    def __iadd__(self, other):
        self.a += other.a
        self.b += other.b
        return Complex(self.a, self.b)
    def __isub__(self, other):
        self.a -= other.a
        self.b -= other.b
        return Complex(self.a, self.b)
    def __imul__(self, other):
        self.a = self.a * other.a - self.b * other.b
        self.b = self.a * other.b + self.b * other.a
        return Complex(self.a, self.b)
    def __idiv__(self, other):
        self.a = (self.a * other.a + self.b * other.b) / (other.a ** 2 + other.b ** 2)
        self.b = (self.b * other.a - self.a * other.b) / (other.a ** 2 + other.b ** 2)
        return Complex(self.a, self.b)
    def __abs__(self):
        self.a = (self.a ** 2) ** 0.5
        self.b = (self.b ** 2) ** 0.5
        return self
    def absolute(obj):
        return (obj.a ** 2 + obj.b ** 2) ** 0.5
    def reverse(self):
        return Complex(self.a / self.a ** 2 - self.b ** 2 * -1, self.b / self.a ** 2 - self.b ** 2 * -1)

a = Complex(0, 4)
b = Complex(7, 0)
print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a < b)
print(a >= b)
print(a > b)
print(a <= b)
print(a)
a += b
print(a)
a -= b
print(a)
a *= b
print(a)
a /= b
print(a)
c = Complex(-2, -1)
abs(c)
print(c)
