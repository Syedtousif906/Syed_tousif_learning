list_1 = [1, 2, 9, 8, 6, 3, 5, 66, 77, 30, 99]
min_value = float('inf')  # Initialize to infinity
max_value = float('-inf')  # Initialize to negative infinity
print(min_value)
for num in list_1:
    if num > max_value:
        max_value = num
    if num < min_value:
        min_value = num

print(f"Min: {min_value}")
print(f"Max: {max_value}")