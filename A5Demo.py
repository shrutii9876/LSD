def length(str1):
 c=0
 for i in str1:
  c=c+1
 return c
 
n=int(input("enter the number of string "))
list1=[]
list2=[]
for i in range(0,n):
 p=str(input("enter the string"))
 list1.append(p)
 list2.append(length(p))
m=max(list2)
ind=list2.index(m)
l=list1[ind]
print("word with the longest string ",l)
