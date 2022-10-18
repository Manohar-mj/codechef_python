# cook your dish here
t=int(input())
for i in range(t):
     x,y = map(int, input().split())
     c=x//y
     print(c**2)
