def mul(x):
    if x == 1: 
        return 1
    return x*mul(x-1)
n=int(input())
res=mul(n)
print(res)
