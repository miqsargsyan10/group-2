#!/usr/bin/env python3

class Person(object):
    def __init__(self, first, last, age):
        self.first = first
        self.last = last
        self.age = age
    def __str__(self):
        return self.last + " " + self.first + " is " + str(self.age) + " years old."

class Employee(Person):
    def __init__(self, first, last, age, staffnum):
        Person.__init__(self, first, last, age)
        self.staffnum = staffnum
    def str(self):
        return Person.__str__(self) + " " + self.staffnum

x = Person("Marge", "Simpson", 36)
y = Employee("Homer", "Simpson", 28, "engineer")
print(x)
print(y)
