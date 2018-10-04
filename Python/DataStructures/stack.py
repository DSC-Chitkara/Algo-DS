class Stack:
    def __init__(self):
        self.stack = list()

    def isEmpty(self):
        return self.stack == []

    def push(self, data):
        if data not in self.stack:
            self.stack.append(data)
            return True
        return False

    def printing(self):
        print(self.stack)

    def pop(self):
        return self.stack.pop()

    def size(self):
        return len(self.stack)

myStack = Stack()
x = 1
print("Enter \n1 : push \n2 : pop \n3 : exit")
while x != 3:
    x = int(input("Enter the option : "))
    if x == 1:
        a = int(input())
        myStack.push(a)
        myStack.printing()
    elif x == 2:
        if myStack.isEmpty():
            print("Stack Empty")
        else:
            myStack.pop()
            myStack.printing()
    elif x == 3:
        print("Exit")
        myStack.printing()
    else:
        print("Incorrect option\nEnter again\n")
