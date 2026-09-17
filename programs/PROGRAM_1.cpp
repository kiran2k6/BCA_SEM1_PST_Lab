#include <stdio.h>
#include <conio.h>

#define PI 3.142

void main() {
    int r;
    double area, circum;
    clrscr();
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    area = PI * r * r;
    circum = 2 * PI * r;
    printf("\n Area of the circle: %0.21f", area);
    printf("\n Circumference of the circle: %0.21f", circum);
    getch();
}