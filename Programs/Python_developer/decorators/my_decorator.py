def my_decorator(func):
    def wrap_func():
        print("***********")
        func()
        print("***********")
    return wrap_func




@my_decorator
def greed():
    print("I am inside decorator")
    
greed()