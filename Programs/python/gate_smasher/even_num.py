def even_num(num):
    if i%2==0:
        return True
    return False
           
    
num = eval(input("Enter the number : "))
list_1=[]
for i in range (0,num+1):
    if even_num(i):
        list_1.append(i)
print(list_1)
print(list_1[::-1])

    