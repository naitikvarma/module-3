// Q Convert minutes into seconds and hours

#include<stdio.h>

int main() 
{
    int minutes, seconds, hours;

    printf("\nEnter the number of minutes = ");
    scanf("%d", &minutes);

    // Calculate seconds
    seconds = minutes * 60; //75min*60sec = 4500

    // Calculate hours
    hours = minutes / 60; // 75min/60sec = 1.5

    printf("%d minutes is equal to:\n", minutes);
    printf("%d seconds\n", seconds);
    printf("%d hours\n", hours);

    return 0;
}
