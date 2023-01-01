marks=[]
n=int(input("Enter number of students :"))
for i in range(n):
 stu=int(input("Enter marks of student {0} in fundamental of data structure,//IF student is absent enter 0:".format(i+1)))
 marks.append(stu)
sum1=0
for i in range(n):
 sum1+=marks[i]
avg=sum1/n
#absent
def absent():
 absent=0
 for i in marks:
  if i==0:
   absent+=1
 print("Number of students absent:",absent)
#max
def maximum():
 max=marks[0]
 for i in marks:
  if i>max and i!=0:
   max=i
 print("Highest score in class:",max)
#min
def minimum():
 min=marks[0]
 for i in marks :
  if i<min and i!=0:
   min=i
 print("Lowest score in class:",min)
 
#Frequency
def fre():
 counter=0
 num=marks[0]
 for i in marks:
  freq=marks.count(i)
  if freq>counter:
   counter=freq
   num=i
 print("Marks with highest frequency is:",num)

def mainmenu():
 print("\n-------------------SELECT A OPTION--------------------")
 print("1. To calculate average of the class:")
 print("2. To calculate Highest score in the class: ")
 print("3. To calculate Lowest score in the class:")
 print("4. To calculate Number of students absent for the test:")
 print("5. To display marks with Highest Frequency:")
 print("6. Exit")
mainmenu()
loop=True
while loop:
 ch=int(input("\nEnter a choice:"))
 if ch==1:
  print("Total marks of the class:",sum1)
  print("The average of the class is:",avg)
 elif ch==2:
  maximum()
 elif ch==3:
  minimum()
 elif ch==4:
  absent()
 elif ch==5:
  fre()
 elif ch==6:
  print("THANK YOU !!!")
  loop=False
  break
 else:
  print("Enter a valid choice:")
