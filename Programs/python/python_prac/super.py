class user(object):
    def __init__(self,email):
        self.email=email
    def sign_in(self):
        print("signed in")
    
class Wizard(user):
    def __init__(self,name,power,email):
        super().__init__(email)
        self.name= name
        self.power = power
    def attack(self):
        print(f"attacking with power of {self.power},email Id = {self.email}") 

class Archer(user):
    def __init__(self,name,num_arrows):
     self.name= name
     self.num_arrows = num_arrows
    def attack(self):
        print(f"attacking with arrows:arrows left {self.num_arrows}")


wizard1 =Wizard('Merlin',60,'syedtousif@gmail.com')
archer1 = Archer('Robin',30)

wizard1.attack()
archer1.attack()
print(dir(wizard1))