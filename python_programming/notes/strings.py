# AS 7th string notes

# examples
first_name = input("What is your name:\n").strip().title()

last_name = input("what is your last name:\n").strip().title()

full_name = first_name + " " + last_name #concatenate

sentence = 'the quick brown fox jumps over the lazy dog.'.strip()

print(sentence.find("jumps"))
print(sentence[20:25])
print(sentence[sentence.find("lazy"): len("lazy")+sentence.find("lazy")])
print(len(first_name)) #finds length of string

print(sentence.strip())

print("welcome to the program", full_name + "!")

# Sanitization and stupid proofing!
# Stupid proofing prevents the user to break the coding(s)


# Debugging is fixing code!
# 3 types of bugs that exist:

    # Syntax Error - a mistake in your grammar
# error = "This is a bug'

    # Logic error - harder to find; still works, but gives you the results you don't want
numOne = "1"
numTwo = "2"
print(numOne+numTwo)

    # Run-Time error - looks fine until you run it to where ther is an error, then it breaks
# num = 3
# print("my favorite number is"+num)