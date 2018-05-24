#!/usr/bin/env python3
vowels = ["A", "E", "I", "O", "U"]
input = input("Input a string: ")
output = [up for up in input if up.upper() in vowels]
output = ("").join(output)
print(output)
