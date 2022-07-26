n  = int(input())
arr=[]
sum_ =int(0)
for i in range(n):
    a=[]
    b = input()
    lst=b.split()
    for j in range(3):
        a.append(lst[j])
        sum_=sum_+int(lst[j])
    arr.append(a)
        
if(sum_==0):
    print("YES")
else:
    print("NO")       