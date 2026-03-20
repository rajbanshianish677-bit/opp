numbers = [5, 10, 15 ,20]

def add_three(x):
    return x+3
result = list (map( add_three, numbers))
print(result)