try:
   with open('text.txt',mode='r') as my_file:
    print(my_file.read())
except FileNotFoundError as err:
    print("file does not exist")