# AS 7th Conditionals notes

#homework_done = input("is your homework done: ").strip().capitalize()

#if homework_done == "yes":
    #print("yes, you can go")
#else:
    #print("go do your homework!")

grade = 110

if grade >= 90:
    if grade > 100:
        print(f"Yu cheese it, that isnt possible!")
    else:
       print(f"You have grade {grade}% that is an A!")
elif grade >= 80:
    print(f"you have a {grade}% that is a B!")
elif grade >= 70:
    print(f"you have a {grade}% that is a C!")
else:
    print(f"You have a {grade}% that is not an A :<")

# if is telling the computer if it is true or false
# boolean statement or condition is a true or false (line 5)
# one = is a comand
# two = is a quesion. EX: "are these the same/equal?"
# something indented means its inside of something
# < is greater than
# > is less than
# <= is less than or equal to
# >= is greater than or equal to
# ! means not


# need to write elif when have more than 2 needed outcomes

name = input("What is your name: ")

if name == "Mrs. LaRose": 
    print("You are the teacher!")
elif name == "Tia" or name == "Ashley":
    print("You are the TA")
else:
    print(f"Hello {name}, you are a student!")
    if grade >= 70:
        print("you are passing the class!")
# logical opperators and, or not
