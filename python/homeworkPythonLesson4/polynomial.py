#!/usr/bin/env python3

class Polynomial(object):
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
    def __str__(self):
        return str(self.a) + "x^2" + "".join(["+" if self.b > 0 else ""]) + str(self.b) + "x" + "".join(["+" if self.c > 0 else ""]) + str(self.c) 
    def getValue(self, x):
        return self.a * x ** 2 + self.b * x + self.c
    def __add__(self, other):
        return Polynomial(self.a + other.a, self.b + other.b, self.c + other.c)
    def __sub__(self, other):
        return Polynomial(self.a - other.a, self.b - other.b, self.c - other.c)
    def __mul__(self, other):
        return str(self.a * other.a) + "x^4" + "".join(["+" if self.a * other.b + self.b * other.a > 0 else ""]) + str(self.a * other.b + self.b * other.a) + "x^3" + "".join(["+" if self.a * other.c + self.b * other.b + self.c * other.a > 0 else ""]) + str(self.a * other.c + self.b * other.b + self.c * other.a) + "x^2" + "".join(["+" if self.b * other.c + self.c * other.b > 0 else ""]) + str(self.b * other.c + self.c * other.b) + "x" + "".join(["+" if self.c * other.c > 0 else ""]) + str(self.c * other.c)
    def armat(self):
        d = self.b ** 2 - 4 * self.a * self.c
        if d == 0:
            return -self.b / 2 * self.a
        elif d < 0:
            return None
        else:
            x1 = (-self.b + d ** 0.5) / 2 * self.a
            x2 = (-self.b - d ** 0.5) / 2 * self.a
            return (x1, x2)

a = Polynomial(1, -4, 4)
print(a.armat())
b = Polynomial(1, -4, 3)
print(b.armat())
print(a * b)
print(a + b)
print(a - b)
