#include <stdio.h>

int main()
{
    int family_members, monthly_usage, saved_water_days, code;
    printf("Enter family members : ");
    scanf("%d", &family_members);
    printf("Enter water used in liters(monthly) : ");
    scanf("%d", &monthly_usage);
    printf("Enter number of days water was saved : ");
    scanf("%d", &saved_water_days);
    printf("Enter code category : ");
    scanf("%d", &code);
    switch (code)
    {
    case 1:
        printf("Low usage household\n");
        break;
    case 2:
        printf("Average household\n");
        break;
    case 3:
        printf("High usage household\n");
        break;
    case 4:
        printf("Excessive  usage household\n");
        break;

    default:
        printf("Invalid category code\n");
        break;
    }
    if (monthly_usage < 3000 || monthly_usage == 3000)
    {
        printf("Bill = 500 PKR\n");
    }
    else
    {
        printf("Bill = 1000 PKR\n");
    }

    if (monthly_usage > 3000)
    {
        if (family_members > 6)
        {
            printf("Allowed large family exception\n");
        }
        else
        {
            printf("Fine applied\n");
        }
    }
    else
    {
        printf("Fine applied\n");
    }
    if (monthly_usage < 2500)
    {
        if (saved_water_days > 10)
        {
            printf("Bonus : 300 PKR Discount\n");
        }
        else
        {
            printf("No bonus.\n");
        }
    }
    else
    {
        printf("No bonus.\n");
    }

    return 0;
}