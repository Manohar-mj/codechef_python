for _ in range(int(input())):
    n , m = map(int, input().split())
    l = int(n/2)
    if(n & 1):
        for i in range(m-l, m+l+1):
            print(i, end=" ")
    else:
        for i in range(m-l, m+l+1):
            if(i != m):
                print(i, end=" ")
    print("")