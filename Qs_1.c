#include <stdio.h>

int main(){
    int water_usage ;
    printf("Enter water used in liters : ");
    scanf("%d" , &water_usage);
    if( water_usage < 100 || water_usage==100){
        printf("Efficient usage");

    }
    else{
        printf("High usage detection");
    }
    return 0;
}
