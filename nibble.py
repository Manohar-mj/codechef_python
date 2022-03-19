n=int(input())
for _ in range(n):
    x=int(input())
    if x%2==0 and x%4==0:
        print("Good")
    else:
        print("Not Good")
