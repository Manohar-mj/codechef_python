for i in range(int(input())):
    n,r=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    opr=[[a[i]-b[i],[a[i],b[i]]]for i in range(n)]
    opr.sort()
    res=0
    for i in range(n):
        while r >= opr[i][1][0]:
            temp = r // opr[i][1][0]
            res += temp
            r -= (temp * opr[i][1][0])
            r += (temp * opr[i][1][1])
    print(res)
