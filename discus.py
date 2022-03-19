# cook your dish here
n=int(input())
for _ in range(n):
    a,b,c=map(int,input().split())
    print(max(a,b,c))
