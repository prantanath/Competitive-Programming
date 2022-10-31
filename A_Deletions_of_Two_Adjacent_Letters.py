t = int(input())
for i in range(t):
    ok = False
    s =input()
    a =input()
    x= len(s)
    for j in range(x):
        if(s[j] == a):
            if(j%2==0):
                ok=True
    
    if(ok):
        print("YES")
    else:
        print("NO")
                