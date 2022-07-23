from cProfile import label

lst = input()
lst2=lst.split()
a=lst2[0]
b=lst2[1]

sum1 = 0
while int(a)>10:
 str(a)
 for i in a:
    sum1=sum1+int(i)

 a=sum1
 
sum2 = 0
while int(b)>10:
 str(b)
 for i in b:
    sum2=sum2+int(i)

 b=sum2

if(a==b):
    print("True")
else:
    print("False")