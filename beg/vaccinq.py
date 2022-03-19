t=int(input())
for _ in range(t):
    n,p,x,y=map(int,input().split())
    arr=list(map(int,input().split()))
    s=y
    for i in range(p-1):
        if arr[i]==1:
            s+=y
        else:
            s+=x
    print(s)
        
