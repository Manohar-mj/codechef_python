for _ in range(int(input())):
    n,x=map(int,input().split())
    z=0
    for i in range(n):
        s,t=map(int,input().split())
        if s<=x: z=max(z,t)
    print(z)
