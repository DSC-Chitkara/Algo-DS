#!/usr/bin/env python3

def main():
    array = []
    print("Enter numbers to add in array and -9999 to stop")
    while True:
        user_input = int(input())
        if user_input == -9999:
            break
        array = array + [user_input]
    print (array)
    linear_search(array, int(input("Enter number to search\n")))

def linear_search(array, num):
    pos  = 0
    for x in array:
        if x == num:
            print(pos)
            return
        pos = pos + 1
    print("Element not found")

if __name__ == '__main__':
    main()