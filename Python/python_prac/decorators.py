def my_decorators(greed):
    def wrap_func():
        print("*****************")
        greed()
        print("*****************")
    return wrap_func
    

@my_decorators
def func():
    print("I am inside function")
    
func()
