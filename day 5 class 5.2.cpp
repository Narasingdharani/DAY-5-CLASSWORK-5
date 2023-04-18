#include <stdio.h>

int main() 
    float temperature;

    printf("Enter temperature in centigrade: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Freezing weather");
    }
    else if (temperature >= 0 && temperature <= 10) {
        printf("Very cold weather");
    }
    else if (temperature > 10 && temperature <= 20) {
        printf("Cold weather");
    }
    else if (temperature > 20 && temperature <= 30) {
        printf("Normal in temp");
    }
    else if (temperature > 30 && temperature <= 40) {
        printf("Its hot");
    }
    else {
        printf("Its very hot");
    }

    return 0;
}
