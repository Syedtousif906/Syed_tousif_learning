class car():
    def __init__(self,name,age,gmail):
        self.name=name
        self.name=age
        self.gmail=gmail
        print("I am inside Car constructor")
        
        
class Innova(car):
    def __init__(self,name,age,gmail):
        super().__init__(name,age,gmail)
        print("I am inside Innova constructor")
        print(f'My name is {self.name} with age = {self.gmail}')
        
class Swift(car):
    def __init__(self,name,age):
        self.name=name
        self.age=age
        print(f'My name is {self.name} with age = {self.age}')
        print("I am inside Swift constructor")
        
obj = Swift("syed",29)
obj = Innova("Tousif",20,"syed@tousif")