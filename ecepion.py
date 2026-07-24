try:
    a = int(input("Enter first number: "))
    b = int(input("Enter second number: "))
    result = a / b
except ZeroDivisionError:
    print("Division by zero is not allowed.")
except ValueError:
    print("Please enter valid numbers.")
else:
    print("Result =", result)
finally:
    print("Program execution finished.")