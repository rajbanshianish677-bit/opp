# church numerals

zero = lambda f: lambda x : x
one = lambda f: lambda x : f(x)
two = lambda f: lambda x: f(f(x))

to_int = lambda n: n(lambda x: x + 1)(0)

print("zero =", to_int(zero))
print("one =", to_int(one))
print("two =", to_int(two)) 