#!/bin/python3
if __name__ == '__main__':
    a = int(input().strip())#taking input
    if a%2 != 0:
        print("Weird")
    else:
        if a >= 2 and a <= 5:
            print("Not Weird")
        elif a >= 6 and a <= 20:
            print("Weird")
        else:
            print("Not Weird")
