def print_formatted(number):
    s = len(bin(n)[2:])
    for i in range(1, number+1):
        a = str(i).rjust(s,' ')
        o = oct(i);h = hex(i); b = bin(i)
        o = o[2:].rjust(s,' '); h = (h[2:].upper()).rjust(s,' '); b = b[2:].rjust(s,' ')
        print("{0} {1} {2} {3}".format(a,o,h,b))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)