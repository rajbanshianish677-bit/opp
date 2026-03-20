numbers = [1, 2, 3, 4, 5]
result1: list = list(map(lambda x: x * 2, map(lambda x: x+3, numbers)))
result2: list = list(map(lambda x: (x+3) * 2, numbers))
 
print(result1)
print(result2)