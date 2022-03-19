# cook your dish here
n=int(input())
for _ in range(n):
    x,y=map(int,input().split())
    i=y*2
    j=x/i
    print(int(j))
