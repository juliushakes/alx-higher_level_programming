#!/usr/bin/python3
import random
number = random.randint(-10, 10)
if number < 0:
    print("{number:d} is negative")
elif number > 0:
    print("{number:d} is positive")
else:
    print("0 is zero")
