#include <stdio.h>
#include <conio.h>

void main() {
    float per;
    clrscr();
    printf("Enter percentage: ");
    scanf("%f", &per);
    if(per > 90.0) {
	printf("Exemplary");
    } else if(per >= 80.0) {
	printf("Outstanding");
    } else if(per >= 70.0) {
	printf("First division with distinction");
    } else if(per >= 60.0) {
	printf("First division");
    } else if(per >= 50.0) {
	printf("Second class");
    } else if(per >= 35.0) {
	printf("Pass class");
    } else {
	printf("Failed: Re-Appear");
    }
    getch();
}