try:
    num = int(input("Enter a number: "))
    result = 10 / num
    print(f"Result: {result}")

except (ValueError, ZeroDivisionError):
    print("Invalid input or division by zero.")