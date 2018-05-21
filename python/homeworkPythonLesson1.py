#!/usr/bin/env python3

#exercise1
'''
for number in range(1500, 2700):
    if number % 7 == 0 or number % 5 == 0:
        print(number)
'''

#exercise2
'''
fib1 = 0
fib2 = 1
while fib1 < 50:
    print(fib1, end = ", ")
    fib1, fib2 = fib2, fib1 + fib2
print()
'''

#exercise3
'''
number = int(input("Input a number: "))
for i in range(1, 11):
    print(number, "x", i, "=", number * i)
'''

#exercise4
'''
string = input("Input a string: ")
state = True
while len(string) > 1:
    if string[0] != string[-1]:
        state = False
        break
    string = string[1:-1]
if state:
    print("String is palindrome!!")
else:
    print("String is not palindrome!!")
'''

#exercise5
'''
word = input("Input a word: ")
word = word[-1] + word[1:-1] + word[0]
print(word)
'''
