#Variable = string, integer, float, boolean
#String = Text "" or ''
#Integer = Number, can be on math
#Float = Decimal number
#Boolean = True or False
#f-string = f"blablabla {variable}""

#String
first_name = "Qiraa"
print(first_name)
print(f"Hello {first_name}")

#Integer
age = 20
print(f"You are {age} yo")

#Float
price = 420.69
print(f"The price is ${price}")

#Boolean
is_student = False
print(f"Are you a student?: {is_student}")
if is_student:
    print("You are a student") #if True
else:
    print("You are not a student") #if False