# AS 7th Update Financial Calulator

print("welcome to the financial calculator. Tell me each number as a plain number")

def input_amount(amount):
    return float(input(f"Your montly {amount}: "))

def percent_amount(amount):
    return round(amount/income*100,0)

income = input_amount("income")
rent = input_amount("rent")
utilities = input_amount("utilities")
groceries = input_amount("groceries")
transportation = input_amount("transportation")
savings = income*.1
total_expenses = rent + utilities + groceries + transportation + savings
spending = income - total_expenses

percent_savings = percent_amount(savings)
percent_rent = percent_amount(rent)
percent_utilities = percent_amount(utilities)
percent_groceries = percent_amount(groceries)
percent_transportation = percent_amount(transportation)
percent_spending = percent_amount(spending)

print("\n rent is $", rent, "and that is", percent_rent, "% of your income")
print("\n utilities is $", utilities, "and that is", percent_utilities, "% of your income")
print("\n groceries is $", groceries, "and that is", percent_groceries, "% of your income")
print("\n transportation is $", transportation, "and that is", percent_transportation, "% of your income")
print("You should have $", spending, "of money left to spend in a month, giving you", percent_savings, "% of your income")
print("You have $", spending, "of money left to spend each month, giving you", percent_spending, "% of your income")

print("Thank you for using this calculator")