t=int(input())
for _ in range(t):
    a,b,a1,b1,a2,b2 =map(int,input().split())
    if (a==a1 and b==b1) or (a==b1 and b==a1):
        print('1')
    elif (a==a2 and b==b2) or (a==b2 and b==a2):
        print('2')
    else:
        print('0')
    
