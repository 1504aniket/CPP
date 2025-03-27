# ques 1
list1=[1,2,3,4,5,6,7,8]
for i in list1:
    print(i,end=" ")
print("\n")


# que2
for i in list1:
    if(i==3):
        break
    print(i,end=" ")

# que3
for i in list1:
    if(i%2==0):
        continue
    else:
        print(i)