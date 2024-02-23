//30. WAP to convert years into days and days into years ?
#include <stdio.h> 
int main() 
{
    int years, days;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365;
    printf(" years is equal to %d days\n",days);

    printf("Enter the number of days:\n ");
    scanf("%d", &days);

    years = days / 365;
    printf("days is equal to %d years\n",years);

    return 0;
}
