def my_decorator(func):
    def wrap_fun():
        print("********")
        func()
        print("*********")
    return wrap_fun





@my_decorator
def greed():
    print("I am under decorator")

greed()