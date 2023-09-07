first = input("Enter the first value : ")
operator = input("Enter the operator (+,-,*,/,%) : ")
second = input("Enter the second value : ")
first = int(first)
second = int(second)

if operator == "+":
    print("Answer is : " + str(first + second))
elif operator == "-":
    print("Answer is : " + str(first - second))
elif operator == "*":
    print("Answer is : " + str(first * second)) 
elif operator == "/":
    print("Answer is : " + str(first / second)) 
elif operator == "%":
    print("Answer is : " + str(first % second))
elif operator == "**":
    print("Answer is : " + str(first ** second)) # power of value             
else:
    print("Invalid operator.")       