#include <stdio.h>

int main()
{
    int saved_water_days, monthly_usage;
    printf("Enter number of days water was saved : ");
    scanf("%d", &saved_water_days);
    printf("Enter water used in liters(monthly) : ");
    scanf("%d", &monthly_usage);

    if (monthly_usage < 2500)
    {
        if (saved_water_days > 10)
        {
            printf("Bonus : 300 PKR Discount");
        }
    }
    else
    {
        printf("No bonus.");
    }
    return 0;
}