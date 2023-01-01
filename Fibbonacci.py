def fib_search(array,key,n):
    b=0
    a=1
    f=b+a
    while f<n:
        b=a
        a=f
        f=b+a
    offset=-1
    while f>1:
        i=min(offset+b,n-1)
        if array[i][0]<key:
            f=a
            a=b
            b=f-a
            offset=i
        elif array[i][0] >key:
            f=b
            a=a-b
            b=f-a
        else:
            return i
    if a and array[offset+1]==key:
        return offset+1
    return -1
def insert():
    A=[item]
    ph=int(input("Insert phone no."))
    A.append(ph)
    print(A)
    arr.append(A)
def sort():
    for i in range(n):
        i=0
        while i<n:
            if arr[i][0]>arr[i+1][0]:
                arr[i],arr[i+1]=arr[i+1],arr[i]
            i=i+1
arr=[["Kaustubh",7858965896],["Kunal",5586236546],["Om",3587452145],["Prajwal",7889657478]]
print(arr)
n=len(arr)
item=input("Enter name to search: ")
index=fib_search(arr,item,n)
if index==-1:
    print("Name not found")
    insert()
    sort()
    print("Sorted array: ",arr)
else:
    print("Name found at",index)
