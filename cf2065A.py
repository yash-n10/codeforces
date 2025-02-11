x = int(input())
l1=[]

for i in range(0,x):
    str1=str(input())
    str1=str1[0:len(str1) - 2] + 'i'
    l1.append(str1)
for x in l1:
    print(x)