#include<stdio.h>
int main()
{
    float distance_km,distance_meter,distance_feet,distance_inches,distance_centimeter;
    printf("Distance in Kilometer:");

    scanf("%f",&distance_km);
    distance_meter = 1000 * distance_km;
    distance_feet = 3208.87 * distance_km;
    distance_inches = 39370.1 * distance_km;
    distance_centimeter = 100000.05 * distance_km;

    printf("Meter=%.2f\nFeet=%.2f\nInches=%.2f\nCentimeter=%.2f\n",distance_meter,distance_feet,distance_inches,distance_centimeter);

    return 0;
}
