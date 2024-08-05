num = [1,2,3,4,5,6,7,8,9,0]

def even(num):
    if num%2==0:
        return True
    
    
even = filter(even,num)
print(list(even))
    
    
    
even_1 = filter(lambda num:num%2==0, num)
print(list(even_1))
