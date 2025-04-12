#include <stdio.h>
#define PI 3.14159
int main(void)
{
    float radius, volume;
    printf("This program will calculate the volume of a sphere\nPlease provide a radius in metres: ");
    scanf("%f", &radius);
    volume = (4.0f/3.0f) * PI * radius * radius * radius;
    printf("The volume of your sphere is %f cubic metres.\n", volume);

}