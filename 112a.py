a = input()
a = a.lower()
b = input()
b = b.lower()
sum1=0
sum2=0
for i in a:
    sum1=sum1+ord(i)
    
for j in b:
    sum2=sum2+ord(j)
    
if a==b:
    print(0)
elif(a>b):
    print(1)
else:
    print(-1)
    
    