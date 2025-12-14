#include <stdio.h>

int main()
{
    int family_members, monthly_usage;
    printf("Enter family members : ");
    scanf("%d", &family_members);
    printf("Enter water used in liters(monthly) : ");
    scanf("%d", &monthly_usage);
    if (monthly_usage > 3000)
    {
        if (family_members > 6)
        {
            printf("Allowed large family exception");
        }
    }
    else
    {
        printf("Fine applied");
    }
    return 0;
}