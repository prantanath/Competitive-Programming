t = int(input())
for i in range(t):
    a = int(input())
    tmp1= a//3
    tmp2= tmp1*2
    dif1,dif2,dif3 = tmp1-1,tmp2-tmp1-1,a-tmp2-1
    # print(dif3)
    ans = min(dif1,dif2,dif3)
    print(ans-1)

                