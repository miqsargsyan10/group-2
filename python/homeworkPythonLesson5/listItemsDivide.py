#!/usr/bin/env python3
a = [1, 2, 3, 1, 5]
b = [4, 'a', 0, 7]
for i in a:
    try:
        print(i / b[a.index(i)])
    except IndexError:
        print("Index error!")
    except ZeroDivisionError:
        print("Zero division error!")
    except TypeError:
        print("Type error!")
