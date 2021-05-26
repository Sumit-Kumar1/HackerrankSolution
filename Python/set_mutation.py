n = int(input())
s = set(map(int, input().split()))
N = int(input())
while N:
    inp = input().split()
    s1 = set(map(int, input().split()))
    if inp[0] == "intersection_update":
        s.intersection_update(s1)
    elif inp[0] == "update":
        s.update(s1)
    elif inp[0] == "symmetric_difference_update":
        s.symmetric_difference_update(s1)
    elif inp[0] == "difference_update":
        s.difference_update(s1)
    s1.clear()
    N -= 1
    
print(sum(s))