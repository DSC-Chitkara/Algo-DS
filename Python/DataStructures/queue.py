class Queue:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def enqueue(self, item):
        self.items.insert(0, item)

    def printing(self):
        print(self.items)

    def dequeue(self):
        return self.items.pop()

    def size(self):
        return len(self.items)
myQueue = Queue()
x = 1
print("Enter \n1 : enqueue \n2 : dequeue \n3 : exit")
while x != 3:
    x = int(input("Enter the option : "))
    if x == 1:
        a = int(input())
        myQueue.enqueue(a)
        myQueue.printing()
    elif x == 2:
        if myQueue.isEmpty():
            print("Queue is empty")
        else:
            myQueue.dequeue()
            myQueue.printing()
    elif x == 3:
        print("Exit")
        myQueue.printing()
    else:
        print("Incorrect option\nEnter again\n")
