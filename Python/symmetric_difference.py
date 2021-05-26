n = int(input())
s1 = set(map(int, input().split()))
m = int(input())
s2 = set(map(int, input().split()))
s = list(s1.symmetric_difference(s2))
s.sort()
for i in s:
    print(i)
