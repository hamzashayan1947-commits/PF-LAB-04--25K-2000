#include <stdio.h>

int main()
{
    int water_usage;
    printf("Enter water used in liters(monthly) : ");
    scanf("%d", &water_usage);
    if (water_usage < 3000 || water_usage == 3000)
    {
        printf("Bill = 500 PKR");
    }
    else
    {
        printf("Bill = 1000 PKR");
    }
    return 0;
}
