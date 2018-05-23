#!/usr/bin/env python3
pythagorasList = [(a, b, c) for a in range(1, 28) for b in range(a + 1, 29) for c in range(b + 1, 30) if (a ** 2 + b ** 2) ** 0.5 == c]
print(pythagorasList)
