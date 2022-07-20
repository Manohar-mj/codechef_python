for _ in range(int(input())):
    s,a,b,c=map(int,input().split())
    res=s*c
    per=s*c/100
    fin=float(s+per)
    if fin>=a and fin<=b: print("Yes")
    else: print("No")
