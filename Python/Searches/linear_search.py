#!/usr/bin/env python3

# A random list
l = [1, 5, 4, 2, 3]
rand_no = 4
# Linear Search to find a random no
i = 0
for var in l:
    if var == rand_no:
        print(i)
        break;
    i = i +1

