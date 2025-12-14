#include <stdio.h>

int main()
{
    int water_usage;
    printf("Enter water used in liters(monthly) : ");
    scanf("%d", &water_usage);
    if (water_usage > 0)
    {
        if (water_usage < 3000 || water_usage == 3000)
        {
            printf("No fine");
        }
        else if (water_usage > 3000 && water_usage < 5001)
        {
            printf("Fine = 200 PKR");
        }
        else if (water_usage > 5000 && water_usage < 7000)
        {
            printf("Fine = 500 PKR");
        }
        else
        {
            printf("Fine = 1000 PKR + Water Supply Restricted");
        }
    }
    else{
        printf("Invalid amount.");
    }
    return 0;
}
