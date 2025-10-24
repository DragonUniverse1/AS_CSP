// AS 7th update financial calculator
#include <stdio.h>

int main(void){
    float savings = input_amount("savings");
    float rent = input_amount("rent");
    float utilities = input_amount("utilities");
    float groceries = input_amount("groceries");
    float transportation = input_amount("transportation");
    float savings = input_amount("savings");
    float total_expenses = rent+utilities+groceries+transportation+savings;
    float spending = income=total_expenses;

    float percent_savings = percent_amount(savings, income);
    float percent_rent = percent_amount(rent, income);
    float percent_utilities = percent_amount(utilites, income);
    float percent_groceries = percent_amount(groceries, income);
    float percent_transportation = percent_amount(transportation, income);
    float percent_saving = percent_amount(savings, income);
    float percent_spending = percent_amount(spending, income);

    printf("\nYour rent is $%.2f, and that is %.0f percent of your income.", rent, percent_rent);
    printf("\nYour utilities are $%.2f, and that is %.0f percent of your income.", utilities, percent_utilities);
    printf("\nYour groceries is $%.2f, and that is %.0f percent of your income.", groceries, percent_groceries);
    printf("\nYour transportation is $%.2f, and that is %.0f percent of your income.", transportation, percent_transportation);
    printf("\nYou should save $%.2f, a month, and that is %.0f percent of your income.", savings, percent_saving);
    printf("\nYou have $%.2f, of money left to spend each month, and that is %.0f percent of your income.", spending, percent_spending);
    printf("\n\nThanks for using this calulator");

    return 0;
}