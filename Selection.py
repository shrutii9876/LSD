list1=[]
n=int(input("Enter no. of students: "))
for i in range (0,n):
     num=int(input("Enter marks of student {0}".format(i+1)))
     list1.append(num)
print(list1)
def selection_sort_asending():
     for ind in range(0,n):
        min_index=ind
        for j in range(ind + 1, n):
            if list1[j] < list1[min_index]:
                min_index = j
        (list1[ind],list1[min_index])=(list1[min_index],list1[ind])
     print("sorted list of selection_sort_asending:\n",list1)

def bubble_sort_asending():
     if len(list1)>=5:
         for i in range(len(list1)):
             for j in range(len(list1)-i-1):
                 if list1[j]>list1[j+1]:
                     temp=list1[j]
                     list1[j]=list1[j+1]
                     list1[j+1]=temp 
     print("sorted list of bubble_sort_asending:\n",list1)

def top_5_scores():
     if len(list1)>=5:
         print("top_5_scores: ",list1[:-6:-1])
     else:
         print("please enter marks of 5 students")
 
 
def menu():
    print("1.Selection_sort_asending")
    print("2.Bubble_sort_asending")
    print("3.Top 5 scores")
    print("4.Exit")
        
menu()
while True:
     ch=int(input("Enter your choice:"))
     if ch==1:
         print("Selection_sort_asending")
         selection_sort_asending()
 
     elif ch==2:
        print("bubble_sort_asending")
        bubble_sort_asending()
 
     elif ch==3:
         print("top_5_scores")
         top_5_scores()

     elif ch==4:
         break

     else:
         print("Enter a valid choice:") 
         break
