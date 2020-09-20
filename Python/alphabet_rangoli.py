import string
def print_rangoli(size):
    s = 'abcdefghijklmnopqrstuvwxyz'[0:size]
    for i in range(size-1, -size, -1):
        x = abs(i)
        if x>=0:
            l = s[size:x:-1]+s[x:size]
            print("--"*x+'-'.join(l)+"--"*x)


if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)