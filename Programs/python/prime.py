def is_prime(n):
    """Check if a number is a prime number."""
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    
    count=0
    for i in range (1,n):
        if n%i==0:
            count+=1
    if count==1:
        return True
    else :
        return False
    

def prime_numbers_in_range(start, end):
    """Print all prime numbers in a given range."""
    for num in range(start, end + 1):
        if is_prime(num):
            print(num)

# Example usage
start_range = int(input("Enter the start of the range: "))
end_range = int(input("Enter the end of the range: "))
print(f"Prime numbers between {start_range} and {end_range} are:")
prime_numbers_in_range(start_range, end_range)