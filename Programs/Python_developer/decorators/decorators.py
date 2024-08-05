def decorator_func(func):
   def wrap_func():
       print("*************")
       func()
       print("*************")
   return wrap_func
   
   
   
   
   
   
   
@decorator_func 
def greed():
    print("I am a decorator function")
    
greed()