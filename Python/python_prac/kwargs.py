def super_fun(*args,**kwargs):
    total=0
    for items in kwargs.values():
        total+=items
        print(kwargs.keys())
    return sum(args)+total

print(super_fun(1,2,3,4,5,num1=5,num2=10))