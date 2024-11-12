def bubble_sort(arr):
    for i in range(len(arr)-1,1,-1):
        for j in range(0,i):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
    return arr

def select_sort(arr):
    for i in range(0,len(arr)-1):
        min=arr[i]
        swap=i
        for j in range(i+1,len(arr)):        
            if min>arr[j]:
                min=arr[j]
                swap=j 
        arr[i],arr[swap]=min,arr[i]
    return arr

def insert_sort(arr):
    for i in range(1,len(arr)):
        min=arr[i]
        j=i-1
        while j>=0 and arr[j]>min:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=min
    return arr

arr=[42,23,16,47,11,45,49,13]
# print(select_sort(arr))
print(insert_sort(arr))