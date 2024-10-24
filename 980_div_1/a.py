import functools

t = int(input())

def cmp(a, b):
    if min(a[0],a[1]) == min(b[0],b[1]):
        return max(a[0],a[1]) - max(b[0],b[1])
    return min(a[0],a[1]) - min(b[0],b[1])

for _ in range(t):
    n = int(input())
    a = []

    for i in range(n):
        x,y = input().split()
        a.append((int(x), int(y)))

    a.sort(key=functools.cmp_to_key(cmp))

    for i in range(n):
        print(a[i][0], " ", a[i][1], " ", end='', sep='')
    print();
