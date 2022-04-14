for _ in range(int(input())):
    n,m,k=map(int,input().split())
    if k*m>=n:
        print("Yes")
    else:
        print("No")