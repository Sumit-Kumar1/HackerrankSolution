if __name__ == '__main__':
    N = int(input())
    lst = []
    while (N):
        o = input().split()
        if(o[0] == "insert"):
            lst.insert(int(o[1]), int(o[2]))
        elif o[0] == "print":
            print(lst)
        elif o[0] == "remove":
            lst.remove(int(o[1]))
        elif o[0] == "append":
            lst.append(int(o[1]))
        elif o[0] == "sort":
            lst.sort()
        elif o[0] == "pop":
            lst.pop()
        elif o[0] == "reverse":
            lst.reverse()
        N -= 1
