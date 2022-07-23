from cProfile import label


a = input()
b = input()

sum1 = 0
while int(a)>10:
 for i in a:
    sum1=sum1+int(i)

 a=sum1
 
sum2 = 0
while int(b)>10:
 for i in b:
    sum2=sum2+int(i)

 b=sum2

if(a==b):
    print("True")
else:
    print("False")