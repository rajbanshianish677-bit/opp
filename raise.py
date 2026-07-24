def withdraw(balance, amount):
    if amount > balance:
        raise ValueError("Insufficient Balance")
    return balance - amount

try:
    balance = 5000
    amount = int(input("Enter withdrawal amount: "))
    new_balance = withdraw(balance, amount)
    print(f"Remaining Balance: {new_balance}")
except ValueError as e:
    print("Transaction Failed:", e)