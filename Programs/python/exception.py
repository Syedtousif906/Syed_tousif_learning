while True:
    try:
        x=int(input("What's x.? "))
    except ValueError:
        print(f"x is not integer")
    else :
        break
print(f"x is {x}")