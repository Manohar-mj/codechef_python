for _ in range(int(input())):
    n=int(input())
    x=list(map(int,input().split()))
    pos=0
    neg=0
    ans=0
    for i in x:
        if(i>0):
            pos+=1
            # neg++
        elif i<0:
            ans+=1
            # pos++
    for i in range(1,ans):
        neg+=i
    for i in range(1,pos):
        neg+=i
    print(neg)
    