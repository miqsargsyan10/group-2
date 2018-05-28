#!/usr/bin/env python3
try:
    a = int(input("Input number a: "))
    b = int(input("Input number b: "))
    print("a / b =", a / b)
except ZeroDivisionError:
    print("Can not divide by zero!")
except:
    print("Another error!")
