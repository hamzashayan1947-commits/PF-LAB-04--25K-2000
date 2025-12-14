#include <stdio.h>

int main()
{
    int code;
    printf("Enter code category : ");
    scanf("%d", &code);
    switch (code)
    {
    case 1:
        printf("Low usage household");
        break;
    case 2:
        printf("Average household");
        break;
    case 3:
        printf("High usage household");
        break;
    case 4:
        printf("Excessive  usage household");
        break;

    default:
        printf("Invalid category code");
        break;
    }
    return 0;
}
