#!/usr/bin/env python3
import unittest

def add(a, b):
    '''get two elements, return add two elements'''
    return a + b

class unitTestAdd(unittest.TestCase):
    def testing1(self):
        self.assertEqual(add(0, 1), 1)
    def testing2(self):
        self.assertEqual(add(1.5, 2.25), 3.75)
    def testing3(self):
        self.assertEqual(add('Life is ', 'beautifull'), 'Life is beautifull')

if __name__ == '__main__':
    unittest.main() 
