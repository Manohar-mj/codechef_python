t=int(input())
for _ in range(t):
    dsa,toc,dm=map(int,input().split())
    dsa2,toc2,dm2=map(int,input().split())
    if (dsa+toc+dm)>(dsa2+toc2+dm2):
        print("Dragon")
    elif (dsa+toc+dm)<(dsa2+toc2+dm2):
        print("Sloth")
    else:
        if dsa>dsa2:
            print("Dragon")
        elif dsa<dsa2:
            print("Sloth")
        else: 
            if toc >toc2:
                print("Dragon")
            elif toc <toc2:
                print("Sloth")
            else:
                print("Tie")
