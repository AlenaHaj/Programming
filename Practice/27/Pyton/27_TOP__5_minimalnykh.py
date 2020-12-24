x=int(input())
a = list(map(int, input().split()))
q=1
i=1
j=0
b=[]
while(q<6):
    while(i<=len(a)):
        while(j<i):
            b.append(a[j])
            j=j+1
        b=sorted(b, reverse=True)
        [print(i, "", sep="", end="") for i in b]
        print('\n')
        i=i+1    
    q=q+1