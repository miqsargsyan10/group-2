#!/usr/bin/env python3
try:
    n = int(input("Input a number: "))
    if n % 3 != 0:
        try:
            raise ValueError("Input error")
        except ValueError:
            print("Integer number is not divide by 3!")
    else:
        print("Superb!")
except ValueError:
    print("Input is not integer number!")
