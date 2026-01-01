#Typecasting = the process of converting a variable form one data type to another
name = "Qiraa"
age = 20
gpa = 3.5
is_student = True

type(name)
print(type(name))

#converting
gpa = int(gpa)
print(gpa)

age = float(age)
print(age)
age += 1
print(age)

age = str(age)
print(age)
age += "1"
print(age)

name = bool(name)
print(name)
name1 = ""
name1 = bool(name1)
print(name1)

is_student = str(is_student)
print(is_student)