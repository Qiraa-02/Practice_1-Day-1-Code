#input() = A function that prompts the use to enter data. Return the entered data as a string

name = input("What is your name? ")
print(f"Hello {name}")
age = input("How old are you?")
print(f"You are {age} yo")

name1 = input("What are your name again? ")
if bool(name1):
    print(f"You are {name1}")
else:
    name1 = input("What are your name again? ")