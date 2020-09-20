n = int(input())
s = set(map(int, input().split()))
N = int(input())
while N:
    inp = input().split();
    if inp[0] == "pop":
        s.pop()
    elif inp[0] == "remove":
        s.remove(int(inp[1]))
    elif inp[0] == "discard":
        s.discard(int(inp[1]))
    inp.clear();
    N -= 1
 
print(sum(s))
