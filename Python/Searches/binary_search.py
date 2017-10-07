#!/usr/bin/env python3

def main():
    array = []
    size = input("How many numbers do you want to add in array\n")
    while size != 0:
        user_input = int(input())
        array = array + [user_input]
        size = size - 1
    print(array)
    res = binary_search(array, int(input("Enter number to search\n")))
    print(res)

def binary_search(alist, item):
    first = 0
    last = len(alist) - 1
    found = False
    index = 0
    while first <= last and not found:
        midpoint = (first + last) // 2
        if alist[midpoint] == item:
            found = True
            index = midpoint
        else:
            if item < alist[midpoint]:
                last = midpoint - 1
            else:
                first = midpoint + 1
    if found == True:
        return  index
    return "Element not found"

if __name__ == '__main__':
    main()
