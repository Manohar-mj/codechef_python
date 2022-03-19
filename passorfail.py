i=int(input())
for i in range(i):
    n,x,p=map(int,input().split())
    a=x*(3)-(n-x)
    if a>=p :
        print("Pass")
    else:
        print("Fail")
