# value = input()
# lst1 = value.split()
# print(lst1)
# n = len(lst1)
# lst1.sort()
# print(lst1)
# count = int(1)
# for i in range(1,n):
    
#     if(lst1[i]==lst1[i-1]):
#         count = count +1
#     else :
#         print(count)
#         count = 1
# print(count)

# def addition(a,b):
#     return a+b;

# x = int(10)
# y = int(22)
# print(addition(x,y))
# <---------------------lambda function-------------------------------------->
# out = lambda x:x*2
# print(out(10))
# <---------------------Maps-------------------------------------->
def addnumber(num1):
    return num1+1
print(list(map(addnumber,[10,20,99])))