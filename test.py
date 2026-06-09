def addition(a,b):
    c = a + b
    print(f"from inside function{c}")
    return c


print(f"from before function call")
addition(5,10)
print(f"from after function call")
d=addition(20,30)
print(f"from outside function")
print(f"from inside function{d}")