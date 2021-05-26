s = input()
slis = list()
clis = list()
nlis = list()
for i in s:
    if i.isdigit():
        nlis.append(i)
    elif i.islower():
        slis.append(i)
    elif i.isupper():
        clis.append(i)
 
slis.sort(); clis.sort(); nlis.sort()
 
Nlis1, Nlis2 = list(), list()
for i in nlis:
    n = int(i)
    if n%2==0:
        Nlis2.append(i)
    else:
        Nlis1.append(i)
 
lis = slis+clis+Nlis1+Nlis2
lis = ''.join(lis)
print(lis)