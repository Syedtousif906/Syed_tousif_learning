class car :
    def __init__(self,speed,status):
        print("this is method from parent class \"CAR\"")
    
class innova(car):
    def __init__(self,speed,status):
        self.speed = speed
        self.status = status
        
    def start(self) :
        print(f"Innova Car started with Speed of {self.speed} with On status = {self.status}")
        
class swift(car):
    def __init__(self,speed,status):
        self.speed = speed
        self.status = status
    def start(self, light) :
        self.light = light
        print(f"Swift Car started with Speed of {self.speed} with On status = {self.status} with light_status = {self.light}")

class method():
    @classmethod
    def class_method(self):
        print("I am under class Method")
        

car_cc = car(1,1)
innova_car = innova(1,0) 
innova_car.start()
innova_car = swift(3,1)
innova_car.start(1)    

method.class_method()
        
        
         