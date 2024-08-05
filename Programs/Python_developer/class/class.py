class Base():
    def __init__(self,email):
        self.email=email
        print("I am inside Base class")
        
class Derived(Base):
    def __init__(self,name,age,email):
        super().__init__(email)
        self.name=name
        self.age=age
    def attack(self):
        print(f"Derived {self.name} age is {self.age} with mail id = {self.email}")
        
        
class Child(Base):
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def attack(self):
        print(f"Child {self.name} age is {self.age}")
        

Dericved_1= Derived('Tousif',28,'syedtousif1368@gmai.com')
child_1= Child('Tousif',23)
Dericved_1.attack()
child_1.attack()
        