n=int(input())
for _ in range(n):
    a,b,x,y=map(int,input().split())
    p=a*b
    q=x*y
    if q>=p:
        print("Yes")
    else:
        print("No")
