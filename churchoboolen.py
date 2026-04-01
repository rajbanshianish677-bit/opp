# church boolens

True = lambda x: lambda y: x
False = lambda x: lambda y: y
If = lambda condition: lambda a: lambda b: condition(a)(b)

print(If(True) ("Yes")("No"))
print(If(False) ("Yes")("No"))