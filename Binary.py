def bin_search(a,key):
    l=0
    h=len(a)-1
    while l<=h:
        mid=(l+h)//2
        if a[mid][0] == key:
            return mid
        elif a[mid][0]<key:
            l=mid+1
        elif a[mid][0]>key:
            h=mid-1
    return -1
def insert():
    c=[name]
    mob=int(input("Enter mob. number:"))
    c.append(mob)
    print(c)
    arr.append(c)
    print(arr)
def sort():
    for j in range(len(arr)):
        i=0
        while i<len(arr)-1:
            if arr[i][0]>arr[i+1][0]:
                arr[i],arr[i+1]=arr[i+1],arr[i]
            i=i+1
    print(arr)
arr=[["Kaustubh",7858965896],["Kunal",5586236546],["Om",3587452145],["Prajwal",7889657478]]
print("Your Phone Book is as follows:\n",arr)
name=input("Search name:")
index=bin_search(arr,name)
print(index)
if index==-1:
    print("Search Not Found \n To add the number")
    insert()
    print("Sorted Phonebook list is as follow:")
    sort()
else:
    print("Search Found")
