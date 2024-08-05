def find_min_max(arr):
    minn,maxx = arr[0],arr[0]
    for num in arr[1:]:
        if num < minn:
            minn = num
        elif num > maxx:
            maxx = num
            
    return minn,maxx
    
    
array = [3,5,7,8,9,78,555,335,2]
minn,maxx = find_min_max(array)
print(f"min value = {minn}\nmax value is = {maxx}")