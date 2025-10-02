# AS 7th Expressions notes

# What is an algorithm?
    # 
name = input("What is your name:\n")
print("hello", name)

# Treyson has 12 apples, he has 5 friends that he wants to give apples to. How many apples does each friends get?
apples = 12
friends = 5
print("each friend gets", apples/friends, "apples!")

# List steps in an algorithm

# average age of a group of 4 people
age_one = 17
age2 = 15
age3 = 16
age4 = 14

total_ages = age_one + age2 + age3 + age4
average = total_ages/4

print("The average age is:", average)

#List ALL of the different mathmatical operaters (Give me the symbol and tell me what it does)
# 1. Variables(get needed info )
# 2. Do the equations- do the things
# 3. Display results
num1 = int(input("tell me a number:\n"))
num2 = float(input("Tell me anothother number:\n"))
num1 += num2
print("addition(+): ", num1)
num1 -= num2
print("subtraton(-):",num1)
num1 *= num2
print("multiplication(*): " ,num1)
num1 /= num2
print("Division(/): ", round(num1, 2)) # round(number to round, number of decimal places)
num1 **= num2
print("exponents(**): " ,num1)
num1 //= num2
print("Integer Division(//): " ,num1)
num1 %= num2
print("Modulo (%); " ,num1)

# Integer is whole number
# Moduel is whats left