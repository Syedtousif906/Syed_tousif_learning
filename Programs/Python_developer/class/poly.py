class Car():
    def __init__(self,model):
        self.model=model
        print("I am under parent Car Class")

class Innova(Car):
    def __init__(self,status,model):
        super().__init__(model)
        self.status=status
                
    def start(self):
        print(f"Innova Car started with {self.status} status with model {self.model}")
        
class Swift(Car):
    def __init__(self,status):
        self.status=status
                
    def start(self):
        print(f"Swift Car started with {self.status}")
        
        
Innova1=Innova('on',2019)
Innova1.start()
Innova1=Swift('on')
Innova1.start()
