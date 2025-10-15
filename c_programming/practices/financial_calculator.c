// AS 7th Financial calculator
#include <stdio.h>
    float income, rent, utilities, groceries, transportation, expenses, savinigs, total;

void percent(char type[], int amount){
    int per = amount/ income *100;

    printf("The percent of the income for %s is %d%%.", type, per);
}
int main(void){
    float prent, putilities, prgroceries, ptransportion, pexpenses;
    printf("This is going to calculate your budget for the month");
    printf("How much do you make a month? \n");
    scanf("%f", &income);
    printf("your income is: $%.2f\n" income);
    printf("How much is rent?\n");
    scanf("%f", &rent);
    printf("how much are your utilities?\n");
    scanf("%f", &utilities);
    printf("How much are your groceries?\n");
    scanf("%f", &groceries);
    printf("how much is transportation?\n")
    scanf("%f", &transportation);
    expenses = rent+utilities+grocereis+trasnportation:
    prent = rent/income*100;
    putilities = utilities/income*100;

    return 0;
}