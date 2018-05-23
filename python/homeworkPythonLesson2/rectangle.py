#!/usr/bin/env python3
class Rectangle(object):
    def __init__(self, latitude, longitude):
        self.latitude = latitude
        self.longitude = longitude
    def __str__(self):
        return "Latitude of rectangle is " + str(self.latitude) + ": Longitude of rectangle is " + str(self.longitude) + ":"
    def area(self):
        return self.latitude * self.longitude
    def perimeter(self):
        return self.latitude * 2 + self.longitude * 2
    def setLatitude(self, newLatitude):
        self.latitude = newLatitude
        return self
    def setLongitude(self, newLongitude):
        self.longitude = newLongitude
        return self

rec = Rectangle(4, 5)
print(rec)
print("Area of rectangle is " + str(rec.area()))
print("Perimeter of rectangle is " + str(rec.perimeter()))
rec.setLatitude(5)
rec.setLongitude(6)
print(rec)
print("Area of rectangle is " + str(rec.area()))
print("Perimeter of rectangle is " + str(rec.perimeter()))

