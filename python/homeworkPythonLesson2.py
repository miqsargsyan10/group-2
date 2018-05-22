import math
#exercise1
'''
number = input("Input a number: ")
sum = 0
for i in number:
    sum += int(i)
print("Sum of numbers: " + str(sum))
'''

#exercise2
'''
def add_tags(tag, string):
    print("<" + tag + ">" + string + "</" + tag + ">")
tag = input("Input a tag: ")
string = input("Input a string: ")
add_tags(tag, string)
'''

#exercise3
'''
def perfectNumber(number):
    sum = 0
    for i in range(1, number):
        if number % i == 0:
            sum += i
    return sum == number

number = int(input("Input a number: "))
print(perfectNumber(number))
'''

#exercise4
'''
def sumCeil(lst):
    for i in range(len(lst)):
        lst[i] = math.ceil(lst[i])
    return sum(lst)

lst = [2.1, 3.2, 1.2]
print(sumCeil(lst))
'''

#exercise5
'''
def sumFloor(lst):
    for i in range(len(lst)):
        lst[i] = math.floor(lst[i])
    return sum(lst)

lst = [2.1, 3.2, 1.2]
print(sumFloor(lst))
'''

#recursion
#exercise6
'''
def isPall(string):
    if string[0] == string[-1]:
        string = string[1:-1]
        if len(string) <= 1:
            return True
        return isPall(string)
    else:
        return False

string = input("Input a string: ")
print(isPall(string))
'''

#exercise7
'''
def sumPr(integer):
    if integer == 0:
        return 0
    return integer % 10 + sumPr(integer // 10)

integer = int(input("Input a number: "))
if integer >= 0:
    print("Sum of numbers is", sumPr(integer))
else:
    print("Try again...")
'''

#exercise8
'''
def sumPpr(integer):
    if integer <= 0:
        return 0
    return integer + sumPpr(integer - 2)
integer = int(input("Input a number: "))
if integer >= 0:
    print("Sum of numbers is", sumPpr(integer))
else:
    print("Try again...")
'''

#exercise9
'''
def sumRec(lis):
    if len(lis) < 1:
        return 0
    if type(lis[-1]) == type([]):
        ls = lis[-1]
        lis = lis[:-1]
        for i in ls:
            lis.append(i)
    return lis[-1] + sumRec(lis[:len(lis)-1])

lis = [42, [-1, -2], 2, [4, [1, 8] ,3], 25, -2]
print(sumRec(lis))
'''
