# AS 7th funtion notes

# Function examples
# print()
# input()

def welcome():
    name = input("what is your name")
    print(f"Hello, {name}!")


print("This is not in my funtion")
#welcome()
#welcome()
#welcome()
#welcome()

def add(number, number_two):
    number += number_two
    print(number)

num_one = 12
num_two = 4

#add(80, 80)
#add(3, 6)
#add(9, 20)
#add(11, 71)
#add(num_one)

import random

def roll(mod):
   return random.randint(2, 18) + mod


strength = roll(0)
dextarity = roll(1)
intelligence = roll(1)
Charisma = roll(0)
print("Here are your stats!")
print(f"Strength: {roll{0}}\nDex: {roll{1}}\nInt: {roll{1}}\nChar: {roll{0}}")