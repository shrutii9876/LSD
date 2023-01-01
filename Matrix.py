print("\nMatrix A")
r=int(input("No.of rows: "))
c=int(input("No.of columns: "))
A=[[0 for j in range(c)]for i in range(r)]
for i in range(r):
 for j in range(c):
  A[i][j]=int(input("Enter elements :"))
print("\nMatrix A :",A)
print("\nMatrix B :")
p=int(input("No.of rows :"))
q=int(input("No.of columns :"))
B=[[0 for j in range(q)]for i in range(p)]
for i in range(p):
 for j in range(q):
  B[i][j]=int(input("Enter elements :"))
print("Matrix B",B)
result=[[0 for j in range(c)]for i in range(r)]
#Addition of 2 matrices
def add():
 for i in range(r):
  for j in range(c):
   result[i][j]=A[i][j]+B[i][j]
 print("Addition of two matrices :",result)
#Subtraction of 2 matrices
def sub():
 for i in range(r):
  for j in range(c):
   result[i][j]=A[i][j]-B[i][j]
 print("Subtraction of two matrices :",result)
#Multiplication of 2 matrices
def mul():
 for i in range(len(A)):
  for j in range(len(B[0])):
    for k in range(len(B)):
      result[i][j]+=A[i][k]*B[k][j]
 print("Multiplication of two matrices :",result)
#Transpose of 2 matrices
def transpose():
 z=input("Select matrix(A/B) :")
 for i in range(r):
  for j in range(c):
   if z=='A':
    result[j][i]=A[i][j]
   else:
    result[j][i]=B[i][j]
 print("Transpose of matrix :",result)
def menu():
 print("\n*************SELECT AN OPTION**************")
 print("1.Addition of two matrices")
 print("2.Subtraction of two matrices")
 print("3.Multiplication of two matrices")
 print("4.Transpose of a matrix")
 print("5.Exit")
menu()
while True:
 ch=int(input("\nEnter your choice :"))
 if ch==1:
  if r==p and c==q:
   add()
  else:
   print("Matrix operation is invalid")
 elif ch==2:
  if r==p and c==q:
   sub()
  else:
   print("Matrix operation is invalid")
 elif ch==3:
  if r==p and c==q:
   mul()
  else:
   print("Matrix operation is invalid")
 elif ch==4:
  if r==p and c==q:
   transpose()
  else:
   print("Matrix operation is invalid")
 elif ch==5:
  False
  print("THANK YOU!!!")
  break
 else:
  print("Invalid choice")

