for _ in range(int(input())):
    a,b=map(int,input().split())
    c,d=map(int,input().split())
    if a<=c and b<=d:
        print("POSSIBLE")
    else:
        print("IMPOSSIBLE")