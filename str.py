name = "Tony Stark"

print("Position is : " + str(name.find('s')))

print(name.replace("Tony Stark", "Iron Man"))
print(name)

name = "Aman Gupta"
print('A' in name)

print(5 // 2)
print(5 ** 2) # 5 to the power two

i = 5
i += 2 # i = i + 2
print(i)

# logical operator
print(3<2 or 2>1)
print(3>2 and 2>1)
print(not 3 > 2)

# conditional statement
age = 13
if age >= 18:
    print("you are adult.")
    print("you are eligible for vote.")
elif age < 18 and age > 3:
    print("you are in school.")    
else:
    print("you are kid.")       
print("Thank you!")