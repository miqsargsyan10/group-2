#!/usr/bin/env python3
a = True
try:
    a = b
except NameError:
    print("The variable b does not exist!")
except:
    print("Another error!")
