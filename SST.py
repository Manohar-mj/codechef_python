for _ in range(int(input())):
    a,b=map(int,input().split())
    c=10*a
    d=5*b
    if c==d:
        print("ANY")
    elif c>d:
        print("FIRST")
    else:
        print("SECOND")
