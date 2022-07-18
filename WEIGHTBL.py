for _ in range(int(input())):
    w1,w2,x1,x2,m=map(int,input().split())
    a=w2-w1
    b=x1*m
    c=x2*m
    if a>=b and a<=c: print("1")
    else: print("0")
    
    
