t = int(input())

for _ in range(t):
    n = int(input())
    seen = [False] * 55
    a = [int(i) for i in input().split()]

    for i in range(2*n):
        if not seen[a[i]]:
            print("{0}".format(a[i]), end=" ")
            seen[a[i]] = True
    print()
