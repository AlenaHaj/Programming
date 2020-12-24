def print_factorization(n):
    n1=n
    q=0
    r=0
    j=0
    s=0
    a=[]
    b=[]
    if(n<4):
    	b[0]=n
    else:
    	i=2
    	while(i):
    		if(not(n1%i)):
    			n1=n1/i
    			b.append(i)
    			i=2
    		else:
    			i=i+1
    			if((n1/i)==1):
    				b.append(n1)
    				i=0    			
    while(q<=n):
        r=b.count(q)        
        if(r>0):
            if(r>1):
                a.insert(j, q)
                j=j+1
                a.insert(j, "^")
                j=j+1
                a.insert(j, r)
                j=j+1
                a.insert(j, 0)
                j=j+1
            else:
                a.insert(j, q)
                j=j+1
                a.insert(j, 0)
                j=j+1
        q=q+1
    while(s<len(a)):
        if(s==(len(a)-1)):
            a.pop(s)
        else:
            if(a[s]==0):
                a[s]="*"
        s=s+1
    return a

y=0
x=[]
n=int(input())
if(n>5):
    x=print_factorization(n)
    [print(i, "", sep="", end="") for i in x]
else:
    if(n==4):
        print(2,"*",2)
    else:
        print(n)
stop=input()#это для того, чтобы программа останавливалась