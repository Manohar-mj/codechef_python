for _ in range(int(input())):
    a,b,c=map(int,input().split())
    # print(a,b,c)
    aa=a+b
    bb=b+c
    cc=a+c
    print(max(aa,bb,cc))
    
