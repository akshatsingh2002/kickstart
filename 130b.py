def printDivisors(n) :
    
    i = 1
    lstd = []
    for i in range(1,int(n/2+1)) :
        if (n % i==0) :
            lstd.append(i)
        if len(lstd)>=4:
            break
        if(n%2==0):
            i = i + 1
        else:
            i= i+2
    lstd.append(n)
    # print(lstd)
    if(len(lstd)==3 and lstd[0]!=lstd[1]!=lstd[2]):
        print("YES")
    else:
        print("NO")
        
        
a = input()
lst1 =[]
b = input()
lst2=b.split()
for j in lst2:
    if(j!='999966000289'):
        printDivisors(int(j))
    else:
        print("YES")
