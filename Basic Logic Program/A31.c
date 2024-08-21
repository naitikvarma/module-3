// Q  Convert kilometers into meters

#include <stdio.h>

int main() {
    int kilometers, meters;

    printf("\nEnter distance in kilometers = ");
    scanf("%d", &kilometers);

    meters = kilometers * 1000; // 1 kilometer = 1000 meters

    printf("%2d kilometers is equal to %2d meters.\n", kilometers, meters);

    return 0;
}
