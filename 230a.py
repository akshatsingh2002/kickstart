import sre_compile
from turtle import screensize


line1 = input()
lst1 = line1.split()
strength  = int(lst1[0])
n = int(lst1[1])
lst2 = []
lst3 = []
for i in range(0,n):
    val = input()
    lst4= val.split()
    
    lst2.append(int(lst4[0]))
    lst3.append(int(lst4[1]))
i = int(0)
con =int(0)
while con!=n:
    for i in range(0,n):
        if(int(lst2[i])<strength and lst2[i]!=0):
            strength = strength + int(lst3[i])
            lst2[i] = 0
            con =con +  1
        else:
            continue

if(strength>max(lst2)):
    print("YES")
else:
    print("NO")
    
# print(strength)
# print(lst2)
# print(lst3)    