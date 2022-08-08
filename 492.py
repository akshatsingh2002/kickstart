from pickle import FALSE
from posixpath import split
from sre_constants import ANY


val = input()
lst2=val.split()
val3=int(lst2[1])
val2 = input()
lst1 = val2.split()

for i in range(0,len(lst1)):
    lst1[i] = float(lst1[i])
    
lst1.sort()
diff = float(0) 

for i in range(1,len(lst1)):
    temp = float(lst1[i]-lst1[i-1])
    if(temp > diff):
        diff = temp
l = len(lst1)
diff3 = val3-lst1[l-1]

diff = float(diff/2)
if(diff<diff3):
    diff= diff3
if lst1[0] != 0:
    diff2 = lst1[0]
    if diff2 > diff:
        diff = float(diff2)
        
print("{:.10f}".format(diff))
    

    
    

