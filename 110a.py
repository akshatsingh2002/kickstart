from itertools import count


a = input()
l = len(a)
con=0
count_ = int(0)
if l == 2 and a=='47' or a=='74':
    print("YES")
if l == 2 and not a=='47' or a=='74':
    print("NO")
for i in a:
    if i=='4' or i=='7':
        con=1
        count_= count_ + 1;
if l>2:
 for i in a:
    if i=='4' or i=='7':
        con=1
    else:
        con=0
        count_ = str(count_)
        # print(count_)
        break
    
    
 if con==1:
      print("YES")
      
 else:
     for i in count_:
         if i == '4' or i == '7':
            con  = 1
         else :
             con = 0
            #  print(con)
             break
     if con == 1 :
         print("YES")
     else :
         print("NO")
if l<=1:
    print("NO")
      