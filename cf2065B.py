x = int(input())
l1=[]

for j in range(0,x):
    str1=str(input())
    if(len(str1)==1):
        l1.append(1)
    else:
        result=0
        for j in range(0,len(str1) - 1):
            if(str1[j]==str1[j + 1]):
                result=1
                break
            else:
                result=len(str1)
        l1.append(result)
for x in l1:
    print(x)