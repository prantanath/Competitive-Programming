t = int(input())
for i in range(t):
    a,b,c = map(int,input().split())
    # b = int(input())
    # c = int(input())
    ans = (b//c)
    ans2 = ans+ b%c
    if(((ans*c)-1)>=a):
        ans = (((ans*c)-1)%c) + (ans-1)
    ans= max(ans,ans2)
    print(ans)

                