n=int(input())
for _ in range(n):
    x,y,z=map(int,input().split())
    print("Qualify" if y+z*2>=x else "Not Qualify")
