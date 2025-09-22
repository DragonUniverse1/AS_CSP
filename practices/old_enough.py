# AS 7th Old enough Python

# 18- vote
# 16- drive
# 15- learners permit
# 4- school

age = int(input("what is you age: "))

if age >= 4 and age <= 14:
    print("you must be going to school!")
elif age == 15:
    print(f"you can have a learners permit!")
elif age >= 16 and age <= 17:
    print(f"You can drive!")
else:
    print(f"You can vote!")