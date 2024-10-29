t = int(input())

for _ in range(t):
    x,y,z = [int(i) for i in input().split()]
    m = max(x,y,z)

    if ((m == x and m == y) or
        (m == y and m == z) or
        (m == x and m == z)):
        print("YES")
        print(m, min(x,y,z), min(x,y,z))
    else:
        print("NO")
