def Sum_odd_num(num):
    total = 0
    for i in range (1,num+1):
        if i%2!=0:
            total+=i
    return total
           
    
num = eval(input("Enter the number : "))
print(Sum_odd_num(num))

    