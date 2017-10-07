#!/usr/bin/env python3

def main():
    array = []
    size = input("How many numbers do you want to add in array\n")
    while size != 0:
        user_input = int(input())
        array = array + [user_input]
        size = size - 1
    print (array)
    index = linear_search(array, int(input("Enter number to search\n")))
    print(index)

def linear_search(array, num):
    pos  = 0
    for x in array:
        if x == num:
            return(pos)
        pos = pos + 1
    return("Element not found")

if __name__ == '__main__':
    main()
