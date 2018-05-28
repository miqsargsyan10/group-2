#!/usr/bin/env python3
import unittest

def isPrime(n):
    '''get a number and return prime or not this number'''
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

class UnitTestIsPrime(unittest.TestCase):
    def testing1(self):
        self.assertEqual(isPrime(8), False)
    def testing2(self):
        self.assertEqual(isPrime(0), False)
    def testing3(self):
        self.assertEqual(isPrime(-1), False)
    def testing4(self):
        self.assertEqual(isPrime(5), True)

if __name__ == "__main__":
    unittest.main()
