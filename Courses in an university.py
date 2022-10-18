# cook your dish here
T = int(input())
for _ in range(T):
    inpu = int(input())
    res = input().split()
    res = list(map(int,res))
    print(inpu-max(res))
