n = int(input())
lst1 =[]
for i in range(0,n):
    val = input()
    if not val in lst1:
        print("OK")
        lst1.append(val)
    else:
        newval = val + str(lst1.count(val))
        print(newval)
        lst1.append(val)

