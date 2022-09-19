a = input()
lst1 = a.split()
n = int(lst1[0])
m = int(lst1[1])
lst2 = []
b = input()
lst2 = b.split()
# print(lst2)
i = int(0)
ans = int(0)
for i in range(0,m):
    if i == 0:
        ans = int(lst2[i]) + ans - 1
    elif lst2[i]>=lst2[i-1]:
        ans = ans + (int(lst2[i])-int(lst2[i-1])) 
    else:
     ans = ans + int(lst2[i]) + (n - int(lst2[i-1]))
    # print(ans)
    
print(ans)