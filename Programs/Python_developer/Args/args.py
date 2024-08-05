def super_func(*args,**kwarg):
    print(args)
    print(kwarg)
    return sum(args)

print(super_func(1,2,3,4,5,6,num1=7,num2=10))
    