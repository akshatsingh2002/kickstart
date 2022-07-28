n = int(input())
lst_ = []
for i in range(0,n):
    b = int(input())
    lst_.append(b)

for i in range(0,n):
    if(lst_[i]<=2):
        print(0)
    elif(lst_[i]%2!=0):
        print(int(lst_[i]/2))
    else:
        print(int(lst_[i]/2-1))